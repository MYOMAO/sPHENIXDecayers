// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TrackEvaluationContainer_Dict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "TrackEvaluationContainer.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TrackEvaluationContainer(void *p = 0);
   static void *newArray_TrackEvaluationContainer(Long_t size, void *p);
   static void delete_TrackEvaluationContainer(void *p);
   static void deleteArray_TrackEvaluationContainer(void *p);
   static void destruct_TrackEvaluationContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TrackEvaluationContainer*)
   {
      ::TrackEvaluationContainer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TrackEvaluationContainer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TrackEvaluationContainer", ::TrackEvaluationContainer::Class_Version(), "", 18,
                  typeid(::TrackEvaluationContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TrackEvaluationContainer::Dictionary, isa_proxy, 4,
                  sizeof(::TrackEvaluationContainer) );
      instance.SetNew(&new_TrackEvaluationContainer);
      instance.SetNewArray(&newArray_TrackEvaluationContainer);
      instance.SetDelete(&delete_TrackEvaluationContainer);
      instance.SetDeleteArray(&deleteArray_TrackEvaluationContainer);
      instance.SetDestructor(&destruct_TrackEvaluationContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TrackEvaluationContainer*)
   {
      return GenerateInitInstanceLocal((::TrackEvaluationContainer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TrackEvaluationContainer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TrackEvaluationContainer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TrackEvaluationContainer::Class_Name()
{
   return "TrackEvaluationContainer";
}

//______________________________________________________________________________
const char *TrackEvaluationContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrackEvaluationContainer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TrackEvaluationContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrackEvaluationContainer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TrackEvaluationContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrackEvaluationContainer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TrackEvaluationContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrackEvaluationContainer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TrackEvaluationContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TrackEvaluationContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TrackEvaluationContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TrackEvaluationContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TrackEvaluationContainer(void *p) {
      return  p ? new(p) ::TrackEvaluationContainer : new ::TrackEvaluationContainer;
   }
   static void *newArray_TrackEvaluationContainer(Long_t nElements, void *p) {
      return p ? new(p) ::TrackEvaluationContainer[nElements] : new ::TrackEvaluationContainer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TrackEvaluationContainer(void *p) {
      delete ((::TrackEvaluationContainer*)p);
   }
   static void deleteArray_TrackEvaluationContainer(void *p) {
      delete [] ((::TrackEvaluationContainer*)p);
   }
   static void destruct_TrackEvaluationContainer(void *p) {
      typedef ::TrackEvaluationContainer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TrackEvaluationContainer

namespace {
  void TriggerDictionaryInitialization_TrackEvaluationContainer_Dict_Impl() {
    static const char* headers[] = {
"0",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TrackEvaluationContainer_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TrackEvaluationContainer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TrackEvaluationContainer_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
// -*- C++ -*-.

#ifndef G4EVAL_TRACKEVALUATIONCONTAINER_H
#define G4EVAL_TRACKEVALUATIONCONTAINER_H

/*!
 * \file TrackEvaluationContainer.h
 * \author Hugo Pereira Da Costa <hugo.pereira-da-costa@cea.fr>
 */

#include <phool/PHObject.h>

//! track evaluation container base class
/*! this is the base class. Does nothing */
class TrackEvaluationContainer: public PHObject
{
  
  public:
  
  //! constructor
  explicit TrackEvaluationContainer()
  {}
  
  //! copy constructor
  explicit TrackEvaluationContainer(const TrackEvaluationContainer &) = delete;
  
  //! assignment operator
  TrackEvaluationContainer& operator = ( const TrackEvaluationContainer& ) = delete;

  ClassDefOverride(TrackEvaluationContainer,1)
    
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TrackEvaluationContainer", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TrackEvaluationContainer_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TrackEvaluationContainer_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TrackEvaluationContainer_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TrackEvaluationContainer_Dict() {
  TriggerDictionaryInitialization_TrackEvaluationContainer_Dict_Impl();
}
