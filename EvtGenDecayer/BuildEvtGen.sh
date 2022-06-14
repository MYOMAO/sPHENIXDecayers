echo "-------------- CHANGING SOFTWARE NOW BRO --------------------"

#source /opt/sphenix/core/bin/sphenix_setup.csh -n ana.270
#source /cvmfs/sphenix.sdcc.bnl.gov/x8664_sl7/opt/sphenix/core/bin/sphenix_setup.csh -n ana.221
#source /opt/sphenix/core/bin/sphenix_setup.csh -n ana.200

#source /opt/sphenix/core/bin/sphenix_setup.csh -n 

#source /cvmfs/sphenix.sdcc.bnl.gov/gcc-8.3/opt/sphenix/core/bin/sphenix_setup.csh -n ana.269


source /opt/sphenix/core/bin/sphenix_setup.csh -n ana.289

#source /opt/sphenix/core/bin/sphenix_setup.csh -n new

rm -r install

mkdir install
setenv MYINSTALL $PWD/install/
setenv LD_LIBRARY_PATH $MYINSTALL/lib:$LD_LIBRARY_PATH
set path = ( $MYINSTALL/bin $path )

#source $OPT_SPHENIX/bin/setup_local.csh $MYINSTALL
echo "Build trackbase_historic"


#cd trackbase_historic 

#autogen.sh --prefix=$MYINSTALL
#make
#make install

#cd ../


echo   "----------------BUILD PYTHIA 8----------------"

cd TestEvtGen/

sh autogen.sh --prefix=$MYINSTALL

make

make install

cd ..

setenv ROOT_INCLUDE_PATH /sphenix/user/zshi/OldBuild/macros/common:$ROOT_INCLUDE_PATH

#echo "-------------- DONE CHANGING SOFTWARE NOW BRO --------------------"
