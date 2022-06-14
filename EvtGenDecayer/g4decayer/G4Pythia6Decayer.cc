//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
// $Id: G4Pythia6Decayer.cc,v 1.2 2014/10/07 03:06:54 mccumber Exp $
//
/// \file eventgenerator/pythia/decayer6/src/G4Pythia6Decayer.cc
/// \brief Implementation of the G4Pythia6Decayer class

// ----------------------------------------------------------------------------
// According to TPythia6Decayer class in Root:
// http://root.cern.ch/
// see http://root.cern.ch/root/License.html
// ----------------------------------------------------------------------------

#include "G4Pythia6Decayer.hh"
#include "Pythia6.hh"
#include "TFile.h"
#include "TTree.h"


#include <Geant4/G4DecayProducts.hh>
#include <Geant4/G4DynamicParticle.hh>
#include <Geant4/G4ParticleDefinition.hh>  // for G4ParticleDefinition
#include <Geant4/G4ParticleTable.hh>
#include <Geant4/G4String.hh>  // for G4String
#include <Geant4/G4SystemOfUnits.hh>
#include <Geant4/G4Track.hh>
#include <Geant4/G4VExtDecayer.hh>  // for G4VExtDecayer

#include <CLHEP/Vector/LorentzVector.h>

#include <cstdlib>   // for abs
#include <iostream>  // for operator<<, basic_ostream:...
#include <string>    // for operator<<


TFile * CheckDecay;
TTree * DecayTree;
int EventID;
int PDGID;
float px;
float py;
float pz;
float pt;
float E;
float vx;
float vy;
float vz;

const EDecayType G4Pythia6Decayer::fgkDefaultDecayType = kAll;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

G4Pythia6Decayer::G4Pythia6Decayer()
  : G4VExtDecayer("G4Pythia6Decayer")
  , fMessenger(this)
  , fVerboseLevel(0)
  , fDecayType(fgkDefaultDecayType)
  , fDecayProductsArray(0)
{

	std::cout << "Force Here BRTO ORB" << std::endl;


	EventID = 0;
	std::cout << "Force Here BRTO ORB" << std::endl;
/*
	CheckDecay = new TFile("CheckDecay.root","RECREATE");
	CheckDecay->cd();
	DecayTree = new TTree("DecayTree","DecayTree");

	DecayTree->Branch("EventID",&EventID,"EventID/I");	
	DecayTree->Branch("PDGID",&PDGID,"PDGID/I");
	DecayTree->Branch("px",&px,"px/F");
	DecayTree->Branch("py",&py,"py/F");
	DecayTree->Branch("pz",&pz,"pz/F");
	DecayTree->Branch("vx",&vx,"vx/F");
	DecayTree->Branch("vy",&vy,"vy/F");
	DecayTree->Branch("vz",&vz,"vz/F");
	DecayTree->Branch("pt",&pt,"pt/F");
	DecayTree->Branch("E",&E,"E/F");
*/


	fDecayProductsArray = new ParticleVector();

	EvtRandomEngine* eng = 0;
	eng = new EvtSimpleRandomEngine();
	EvtRandom::setRandomEngine((EvtRandomEngine*)eng);
	EvtAbsRadCorr* radCorrEngine = 0;
	std::list<EvtDecayBase*> extraModels;
	std::cout << "Pass 8" << std::endl;

	EvtExternalGenList genList;
	std::cout << "Pass 9" << std::endl;
	radCorrEngine = genList.getPhotosModel();


	extraModels = genList.getListOfModels();

	TString Decay_DEC = "InputDECAYFiles/DECAY.DEC";
	//TString Decay_DEC = "Bs.Mypythia0.DEC";
	TString Evt_pdl = "InputDECAYFiles/evt.pdl";
	myGenerator = new EvtGen(Decay_DEC, Evt_pdl, (EvtRandomEngine*)eng, radCorrEngine, &extraModels);
	myEvtGenDecayer = new PHEvtGenDecayer(myGenerator);
	std::cout << "Setting Decay Table" << std::endl;
	myEvtGenDecayer->SetDecayTable("InputDECAYFiles/Bs.KKee.DEC");


  /// Standard constructor
  //std::cout << __PRETTY_FUNCTION__ << std::endl;
  fDecayProductsArray = new ParticleVector();

  ForceDecay(fDecayType);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

G4Pythia6Decayer::~G4Pythia6Decayer()
{
 /// Destructor
 //std::cout << __PRETTY_FUNCTION__ << std::endl;

	delete fDecayProductsArray;
}

//
// private methods
//

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

G4ParticleDefinition* G4Pythia6Decayer::
GetParticleDefinition(const TParticle* particle, G4bool warn) const
{
	/// Return G4 particle definition for given TParticle

	// get particle definition from G4ParticleTable
	G4int pdgEncoding = particle->GetPdgCode();
	G4ParticleTable* particleTable = G4ParticleTable::GetParticleTable();
	G4ParticleDefinition* particleDefinition = 0;
	if (pdgEncoding != 0)
		particleDefinition = particleTable->FindParticle(pdgEncoding);

	if (particleDefinition == 0 && warn)
	{
		std::cerr
			<< "G4Pythia6Decayer: GetParticleDefinition: " << std::endl
			<< "G4ParticleTable::FindParticle() for particle with PDG = "
			<< pdgEncoding
			<< " failed." << std::endl;
	}


	return particleDefinition;
}


//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
/*

G4DynamicParticle*
G4Pythia6Decayer::CreateDynamicParticle(const Pythia6Particle* particle) const
{
  /// Create G4DynamicParticle.
  //std::cout << __PRETTY_FUNCTION__ << std::endl;
  // get particle properties
  const G4ParticleDefinition* particleDefinition = GetParticleDefinition(particle);
  if (!particleDefinition) return 0;

  G4ThreeVector momentum = GetParticleMomentum(particle);

  // create G4DynamicParticle
  G4DynamicParticle* dynamicParticle = new G4DynamicParticle(particleDefinition, momentum);

  return dynamicParticle;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

G4ThreeVector G4Pythia6Decayer::GetParticlePosition(
    const Pythia6Particle* particle) const
{
  /// Return particle vertex position.
  //std::cout << __PRETTY_FUNCTION__ << std::endl;
  G4ThreeVector position = G4ThreeVector(particle->fVx * cm,
                                         particle->fVy * cm,
                                         particle->fVz * cm);
  return position;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

G4ThreeVector G4Pythia6Decayer::GetParticleMomentum(
    const Pythia6Particle* particle) const
{
  /// Return particle momentum.
  //std::cout << __PRETTY_FUNCTION__ << std::endl;
  G4ThreeVector momentum = G4ThreeVector(particle->fPx * GeV,
                                         particle->fPy * GeV,
                                         particle->fPz * GeV);
  return momentum;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
*/
G4int G4Pythia6Decayer::CountProducts(G4int channel, G4int particle)
{
  /// Count number of decay products
  //std::cout << __PRETTY_FUNCTION__ << std::endl;
  G4int np = 0;
  for (G4int i = 1; i <= 5; i++)
    if (std::abs(Pythia6::Instance()->GetKFDP(channel, i)) == particle)
      np++;
  return np;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void G4Pythia6Decayer::ForceParticleDecay(G4int particle, G4int product, G4int mult)
{
  /// Force decay of particle into products with multiplicity mult
  //std::cout << __PRETTY_FUNCTION__ << std::endl;
  Pythia6* pythia6 = Pythia6::Instance();

  G4int kc = pythia6->Pycomp(particle);
  pythia6->SetMDCY(kc, 1, 1);

  G4int ifirst = pythia6->GetMDCY(kc, 2);
  G4int ilast = ifirst + pythia6->GetMDCY(kc, 3) - 1;

  //
  //  Loop over decay channels
  for (G4int channel = ifirst; channel <= ilast; channel++)
  {
    if (CountProducts(channel, product) >= mult)
    {
      pythia6->SetMDME(channel, 1, 1);
    }
    else
    {
      pythia6->SetMDME(channel, 1, 0);
    }
  }
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void G4Pythia6Decayer::ForceParticleDecay(G4int particle, G4int* products,
                                          G4int* mult, G4int npart)
{
  /// Force decay of particle into products with multiplicity mult
 //std::cout << __PRETTY_FUNCTION__ << std::endl;
  Pythia6* pythia6 = Pythia6::Instance();

  G4int kc = pythia6->Pycomp(particle);
  pythia6->SetMDCY(kc, 1, 1);
  G4int ifirst = pythia6->GetMDCY(kc, 2);
  G4int ilast = ifirst + pythia6->GetMDCY(kc, 3) - 1;
  //
  //  Loop over decay channels
  for (G4int channel = ifirst; channel <= ilast; channel++)
  {
    G4int nprod = 0;
    for (G4int i = 0; i < npart; i++)
      nprod += (CountProducts(channel, products[i]) >= mult[i]);
    if (nprod)
      pythia6->SetMDME(channel, 1, 1);
    else
    {
      pythia6->SetMDME(channel, 1, 0);
    }
  }
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void G4Pythia6Decayer::ForceHadronicD()
{
  /// Force golden D decay modes
  //std::cout << __PRETTY_FUNCTION__ << std::endl;
  const G4int kNHadrons = 4;
  G4int channel;
  G4int hadron[kNHadrons] = {411, 421, 431, 4112};

  // for D+ -> K0* (-> K- pi+) pi+
  G4int iKstar0 = 313;
  G4int iKstarbar0 = -313;
  G4int iKPlus = 321;
  G4int iKMinus = -321;
  G4int iPiPlus = 211;
  G4int iPiMinus = -211;

  G4int products[2] = {iKPlus, iPiMinus}, mult[2] = {1, 1};
  ForceParticleDecay(iKstar0, products, mult, 2);

  // for Ds -> Phi pi+
  G4int iPhi = 333;
  ForceParticleDecay(iPhi, iKPlus, 2);  // Phi->K+K-

  G4int decayP1[kNHadrons][3] = {
      {iKMinus, iPiPlus, iPiPlus},
      {iKMinus, iPiPlus, 0},
      {iKPlus, iKstarbar0, 0},
      {-1, -1, -1}};
  G4int decayP2[kNHadrons][3] = {
      {iKstarbar0, iPiPlus, 0},
      {-1, -1, -1},
      {iPhi, iPiPlus, 0},
      {-1, -1, -1}};

  Pythia6* pythia6 = Pythia6::Instance();
  for (G4int ihadron = 0; ihadron < kNHadrons; ihadron++)
  {
    G4int kc = pythia6->Pycomp(hadron[ihadron]);
    pythia6->SetMDCY(kc, 1, 1);
    G4int ifirst = pythia6->GetMDCY(kc, 2);
    G4int ilast = ifirst + pythia6->GetMDCY(kc, 3) - 1;

    for (channel = ifirst; channel <= ilast; channel++)
    {
      if ((pythia6->GetKFDP(channel, 1) == decayP1[ihadron][0] &&
           pythia6->GetKFDP(channel, 2) == decayP1[ihadron][1] &&
           pythia6->GetKFDP(channel, 3) == decayP1[ihadron][2] &&
           pythia6->GetKFDP(channel, 4) == 0) ||
          (pythia6->GetKFDP(channel, 1) == decayP2[ihadron][0] &&
           pythia6->GetKFDP(channel, 2) == decayP2[ihadron][1] &&
           pythia6->GetKFDP(channel, 3) == decayP2[ihadron][2] &&
           pythia6->GetKFDP(channel, 4) == 0))
      {
        pythia6->SetMDME(channel, 1, 1);
      }
      else
      {
        pythia6->SetMDME(channel, 1, 0);
      }  // selected channel ?
    }    // decay channels
  }      // hadrons
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void G4Pythia6Decayer::ForceOmega()
{
  /// Force Omega -> Lambda K- Decay
  //std::cout << __PRETTY_FUNCTION__ << std::endl;
  Pythia6* pythia6 = Pythia6::Instance();

  G4int iLambda0 = 3122;
  G4int iKMinus = -321;

  G4int kc = pythia6->Pycomp(3334);
  pythia6->SetMDCY(kc, 1, 1);
  G4int ifirst = pythia6->GetMDCY(kc, 2);
  G4int ilast = ifirst + pythia6->GetMDCY(kc, 3) - 1;

  for (G4int channel = ifirst; channel <= ilast; channel++)
  {
    if (pythia6->GetKFDP(channel, 1) == iLambda0 &&
        pythia6->GetKFDP(channel, 2) == iKMinus &&
        pythia6->GetKFDP(channel, 3) == 0)
      pythia6->SetMDME(channel, 1, 1);
    else
      pythia6->SetMDME(channel, 1, 0);
    // selected channel ?
  }  // decay channels
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void G4Pythia6Decayer::ForceDecay(EDecayType decayType)
{
  /// Force a particle decay mode
 //std::cout << __PRETTY_FUNCTION__ << std::endl;
  Pythia6::Instance()->SetMSTJ(21, 2);

  if (fDecayType == kNoDecayHeavy) return;

  //
  // select mode
  G4int products[3];
  G4int mult[3];

  switch (decayType)
  {
  case kHardMuons:
    products[0] = 13;
    products[1] = 443;
    products[2] = 100443;
    mult[0] = 1;
    mult[1] = 1;
    mult[2] = 1;
    ForceParticleDecay(511, products, mult, 3);
    ForceParticleDecay(521, products, mult, 3);
    ForceParticleDecay(531, products, mult, 3);
    ForceParticleDecay(5122, products, mult, 3);
    ForceParticleDecay(5132, products, mult, 3);
    ForceParticleDecay(5232, products, mult, 3);
    ForceParticleDecay(5332, products, mult, 3);
    ForceParticleDecay(100443, 443, 1);  // Psi'  -> J/Psi X
    ForceParticleDecay(443, 13, 2);      // J/Psi -> mu+ mu-

    ForceParticleDecay(411, 13, 1);   // D+/-
    ForceParticleDecay(421, 13, 1);   // D0
    ForceParticleDecay(431, 13, 1);   // D_s
    ForceParticleDecay(4122, 13, 1);  // Lambda_c
    ForceParticleDecay(4132, 13, 1);  // Xsi_c
    ForceParticleDecay(4232, 13, 1);  // Sigma_c
    ForceParticleDecay(4332, 13, 1);  // Omega_c
    break;

  case kSemiMuonic:
    ForceParticleDecay(411, 13, 1);   // D+/-
    ForceParticleDecay(421, 13, 1);   // D0
    ForceParticleDecay(431, 13, 1);   // D_s
    ForceParticleDecay(4122, 13, 1);  // Lambda_c
    ForceParticleDecay(4132, 13, 1);  // Xsi_c
    ForceParticleDecay(4232, 13, 1);  // Sigma_c
    ForceParticleDecay(4332, 13, 1);  // Omega_c
    ForceParticleDecay(511, 13, 1);   // B0
    ForceParticleDecay(521, 13, 1);   // B+/-
    ForceParticleDecay(531, 13, 1);   // B_s
    ForceParticleDecay(5122, 13, 1);  // Lambda_b
    ForceParticleDecay(5132, 13, 1);  // Xsi_b
    ForceParticleDecay(5232, 13, 1);  // Sigma_b
    ForceParticleDecay(5332, 13, 1);  // Omega_b
    break;

  case kDiMuon:
    ForceParticleDecay(113, 13, 2);     // rho
    ForceParticleDecay(221, 13, 2);     // eta
    ForceParticleDecay(223, 13, 2);     // omega
    ForceParticleDecay(333, 13, 2);     // phi
    ForceParticleDecay(443, 13, 2);     // J/Psi
    ForceParticleDecay(100443, 13, 2);  // Psi'
    ForceParticleDecay(553, 13, 2);     // Upsilon
    ForceParticleDecay(100553, 13, 2);  // Upsilon'
    ForceParticleDecay(200553, 13, 2);  // Upsilon''
    break;

  case kSemiElectronic:
    ForceParticleDecay(411, 11, 1);   // D+/-
    ForceParticleDecay(421, 11, 1);   // D0
    ForceParticleDecay(431, 11, 1);   // D_s
    ForceParticleDecay(4122, 11, 1);  // Lambda_c
    ForceParticleDecay(4132, 11, 1);  // Xsi_c
    ForceParticleDecay(4232, 11, 1);  // Sigma_c
    ForceParticleDecay(4332, 11, 1);  // Omega_c
    ForceParticleDecay(511, 11, 1);   // B0
    ForceParticleDecay(521, 11, 1);   // B+/-
    ForceParticleDecay(531, 11, 1);   // B_s
    ForceParticleDecay(5122, 11, 1);  // Lambda_b
    ForceParticleDecay(5132, 11, 1);  // Xsi_b
    ForceParticleDecay(5232, 11, 1);  // Sigma_b
    ForceParticleDecay(5332, 11, 1);  // Omega_b
    break;

  case kDiElectron:
    ForceParticleDecay(113, 11, 2);     // rho
    ForceParticleDecay(333, 11, 2);     // phi
    ForceParticleDecay(221, 11, 2);     // eta
    ForceParticleDecay(223, 11, 2);     // omega
    ForceParticleDecay(443, 11, 2);     // J/Psi
    ForceParticleDecay(100443, 11, 2);  // Psi'
    ForceParticleDecay(553, 11, 2);     // Upsilon
    ForceParticleDecay(100553, 11, 2);  // Upsilon'
    ForceParticleDecay(200553, 11, 2);  // Upsilon''
    break;

  case kBJpsiDiMuon:

    products[0] = 443;
    products[1] = 100443;
    mult[0] = 1;
    mult[1] = 1;

    ForceParticleDecay(511, products, mult, 2);   // B0   -> J/Psi (Psi') X
    ForceParticleDecay(521, products, mult, 2);   // B+/- -> J/Psi (Psi') X
    ForceParticleDecay(531, products, mult, 2);   // B_s  -> J/Psi (Psi') X
    ForceParticleDecay(5122, products, mult, 2);  // Lambda_b -> J/Psi (Psi')X
    ForceParticleDecay(100443, 443, 1);           // Psi'  -> J/Psi X
    ForceParticleDecay(443, 13, 2);               // J/Psi -> mu+ mu-
    break;

  case kBPsiPrimeDiMuon:
    ForceParticleDecay(511, 100443, 1);   // B0
    ForceParticleDecay(521, 100443, 1);   // B+/-
    ForceParticleDecay(531, 100443, 1);   // B_s
    ForceParticleDecay(5122, 100443, 1);  // Lambda_b
    ForceParticleDecay(100443, 13, 2);    // Psi'
    break;

  case kBJpsiDiElectron:
    ForceParticleDecay(511, 443, 1);   // B0
    ForceParticleDecay(521, 443, 1);   // B+/-
    ForceParticleDecay(531, 443, 1);   // B_s
    ForceParticleDecay(5122, 443, 1);  // Lambda_b
    ForceParticleDecay(443, 11, 2);    // J/Psi
    break;

  case kBJpsi:
    ForceParticleDecay(511, 443, 1);   // B0
    ForceParticleDecay(521, 443, 1);   // B+/-
    ForceParticleDecay(531, 443, 1);   // B_s
    ForceParticleDecay(5122, 443, 1);  // Lambda_b
    break;

  case kBPsiPrimeDiElectron:
    ForceParticleDecay(511, 100443, 1);   // B0
    ForceParticleDecay(521, 100443, 1);   // B+/-
    ForceParticleDecay(531, 100443, 1);   // B_s
    ForceParticleDecay(5122, 100443, 1);  // Lambda_b
    ForceParticleDecay(100443, 11, 2);    // Psi'
    break;

  case kPiToMu:
    ForceParticleDecay(211, 13, 1);  // pi->mu
    break;

  case kKaToMu:
    ForceParticleDecay(321, 13, 1);  // K->mu
    break;

  case kWToMuon:
    ForceParticleDecay(24, 13, 1);  // W -> mu
    break;

  case kWToCharm:
    ForceParticleDecay(24, 4, 1);  // W -> c
    break;

  case kWToCharmToMuon:
    ForceParticleDecay(24, 4, 1);     // W -> c
    ForceParticleDecay(411, 13, 1);   // D+/- -> mu
    ForceParticleDecay(421, 13, 1);   // D0  -> mu
    ForceParticleDecay(431, 13, 1);   // D_s  -> mu
    ForceParticleDecay(4122, 13, 1);  // Lambda_c
    ForceParticleDecay(4132, 13, 1);  // Xsi_c
    ForceParticleDecay(4232, 13, 1);  // Sigma_c
    ForceParticleDecay(4332, 13, 1);  // Omega_c
    break;

  case kZDiMuon:
    ForceParticleDecay(23, 13, 2);  // Z -> mu+ mu-
    break;

  case kHadronicD:
    ForceHadronicD();
    break;

  case kPhiKK:
    ForceParticleDecay(333, 321, 2);  // Phi->K+K-
    break;

  case kOmega:
    ForceOmega();

  case kAll:
    break;

  case kNoDecay:
    Pythia6::Instance()->SetMSTJ(21, 0);
    break;

  case kNoDecayHeavy:
    break;

  case kMaxDecay:
    break;
  }
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void G4Pythia6Decayer::Decay(G4int pdg, const CLHEP::HepLorentzVector& p)
{
  /// Decay a particle of type IDPART (PDG code) and momentum P.
  //std::cout << __PRETTY_FUNCTION__ << std::endl;
  Pythia6::Instance()->Py1ent(0, pdg, p.e(), p.theta(), p.phi());
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

G4int G4Pythia6Decayer::ImportParticles(ParticleVector* particles)
{
  /// Get the decay products into the passed PARTICLES vector
  //std::cout << __PRETTY_FUNCTION__ << std::endl;
  return Pythia6::Instance()->ImportParticles(particles, "All");
}

//
// public methods
//

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

G4DecayProducts* G4Pythia6Decayer::ImportDecayProducts(const G4Track& track)
{
  /// Import decay products
  //std::cout << __PRETTY_FUNCTION__ << std::endl;
  // get particle momentum

  std::cout << "Now ROCK ZZ HE ROCK" << std::endl;

	G4ThreeVector momentum = track.GetMomentum();
	G4double etot = track.GetDynamicParticle()->GetTotalEnergy();
	;
	CLHEP::HepLorentzVector p;
	p[0] = momentum.x() / GeV;
	p[1] = momentum.y() / GeV;
	p[2] = momentum.z() / GeV;
	p[3] = etot / GeV;



	// get particle PDG
	// ask G4Pythia6Decayer to get PDG encoding
	// (in order to get PDG from extended TDatabasePDG
	// in case the standard PDG code is not defined)
	G4ParticleDefinition* particleDef = track.GetDefinition();
	G4int pdgEncoding = particleDef->GetPDGEncoding();
	//EvtGen Declaration//

	
	std::cout << "pdgEncoding = " << pdgEncoding << std::endl;

	TClonesArray daughters("TParticle", 10);
	TLorentzVector* ParMom= new TLorentzVector;
	ParMom->SetPxPyPzE(p[0],p[1],p[2],p[3]);
//	std::cout << "p[0] = " << p[0] << "  p[1] = " << p[1] << "  p[2] =  " << p[2] << "   p[3] = " << p[3] << std::endl;
	myEvtGenDecayer->Decay(pdgEncoding, ParMom);
	std::cout << "Pass 12" << std::endl;
	myEvtGenDecayer->ImportParticles(&daughters);
//	myEvtGenDecayer->ImportParticles(&fDecayProductsArray);

	std::cout << "Pass 13" << std::endl;	
	int nTrk = daughters.GetEntriesFast();
	std::cout << "Pass 14" << std::endl;


//	std::cout << "Now Start Looping = " << std::endl;


	// convert decay products EvtGen Products type
	// to G4DecayProducts


	G4DecayProducts* decayProducts = new G4DecayProducts(*(track.GetDynamicParticle()));


	for (int iTrk = 0; iTrk < nTrk; ++iTrk)
	{

		TParticle* ptl0 = (TParticle*)daughters.At(iTrk);
		int id = ptl0->GetPdgCode();
		//int MomID = ptl0->GetFirstMother();
		ptl0->Momentum(FourMom);

	//	if(id == 443) std::cout << "id = " << id << "    MomID = " <<  MomID << std::endl;

		TVector3 rcPosSig(ptl0->Vx() * cm, ptl0->Vy() * cm, ptl0->Vz() * cm);
		TVector3 Mom = FourMom.Vect(); 

		const G4ParticleDefinition* particleDefinition = GetParticleDefinition(ptl0);

		G4ThreeVector G4Mom = G4ThreeVector(Mom[0] * GeV,Mom[1] * GeV,Mom[2] * GeV);

		G4DynamicParticle* dynamicParticle = new G4DynamicParticle(particleDefinition, G4Mom);
		if (dynamicParticle)
		{
			if (fVerboseLevel > 0)
			{
				std::cout << "  G4 particle name: "
					<< dynamicParticle->GetDefinition()->GetParticleName()
					<< std::endl;
			}
	
			// add dynamicParticle to decayProducts
	//		if(id != pdgEncoding) decayProducts->PushProducts(dynamicParticle); 
			//if(abs(id) != 531 && abs(id) != 443 && abs(id) != 333) decayProducts->PushProducts(dynamicParticle); 
			if(abs(id) == 211 || abs(id) == 321 || abs(id) == 11 || abs(id) == 2212 || abs(id) == 13) decayProducts->PushProducts(dynamicParticle); 

			
		}
/*
		PDGID = ptl0->GetPdgCode();
		px = Mom[0];
		py = Mom[1];
		pz = Mom[2];
		pt = TMath::Sqrt(px * px + py * py);
		E = FourMom.E();
	
		vx = ptl0->Vx() * cm;
		vy = ptl0->Vy() * cm;
		vz = ptl0->Vz() * cm;

		DecayTree->Fill();
*/
	}
	//CheckDecay->Write();
	
	std::cout << "decayProducts->entries() = " << decayProducts->entries() << std::endl;
	return decayProducts;
  
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void G4Pythia6Decayer::ForceDecayType(EDecayType decayType)
{
  /// Force a given decay type
  //std::cout << __PRETTY_FUNCTION__ << std::endl;
  // Do nothing if the decay type is not different from current one
  if (decayType == fDecayType) return;

  fDecayType = decayType;
  ForceDecay(fDecayType);
}
