// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TrackEvaluationContainerv1_Dict
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
#include "TrackEvaluationContainerv1.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TrackEvaluationContainerv1(void *p = 0);
   static void *newArray_TrackEvaluationContainerv1(Long_t size, void *p);
   static void delete_TrackEvaluationContainerv1(void *p);
   static void deleteArray_TrackEvaluationContainerv1(void *p);
   static void destruct_TrackEvaluationContainerv1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TrackEvaluationContainerv1*)
   {
      ::TrackEvaluationContainerv1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TrackEvaluationContainerv1 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TrackEvaluationContainerv1", ::TrackEvaluationContainerv1::Class_Version(), "", 31,
                  typeid(::TrackEvaluationContainerv1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TrackEvaluationContainerv1::Dictionary, isa_proxy, 4,
                  sizeof(::TrackEvaluationContainerv1) );
      instance.SetNew(&new_TrackEvaluationContainerv1);
      instance.SetNewArray(&newArray_TrackEvaluationContainerv1);
      instance.SetDelete(&delete_TrackEvaluationContainerv1);
      instance.SetDeleteArray(&deleteArray_TrackEvaluationContainerv1);
      instance.SetDestructor(&destruct_TrackEvaluationContainerv1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TrackEvaluationContainerv1*)
   {
      return GenerateInitInstanceLocal((::TrackEvaluationContainerv1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TrackEvaluationContainerv1*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TrackEvaluationContainerv1cLcLEventStruct_Dictionary();
   static void TrackEvaluationContainerv1cLcLEventStruct_TClassManip(TClass*);
   static void *new_TrackEvaluationContainerv1cLcLEventStruct(void *p = 0);
   static void *newArray_TrackEvaluationContainerv1cLcLEventStruct(Long_t size, void *p);
   static void delete_TrackEvaluationContainerv1cLcLEventStruct(void *p);
   static void deleteArray_TrackEvaluationContainerv1cLcLEventStruct(void *p);
   static void destruct_TrackEvaluationContainerv1cLcLEventStruct(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TrackEvaluationContainerv1::EventStruct*)
   {
      ::TrackEvaluationContainerv1::EventStruct *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TrackEvaluationContainerv1::EventStruct));
      static ::ROOT::TGenericClassInfo 
         instance("TrackEvaluationContainerv1::EventStruct", "", 48,
                  typeid(::TrackEvaluationContainerv1::EventStruct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TrackEvaluationContainerv1cLcLEventStruct_Dictionary, isa_proxy, 4,
                  sizeof(::TrackEvaluationContainerv1::EventStruct) );
      instance.SetNew(&new_TrackEvaluationContainerv1cLcLEventStruct);
      instance.SetNewArray(&newArray_TrackEvaluationContainerv1cLcLEventStruct);
      instance.SetDelete(&delete_TrackEvaluationContainerv1cLcLEventStruct);
      instance.SetDeleteArray(&deleteArray_TrackEvaluationContainerv1cLcLEventStruct);
      instance.SetDestructor(&destruct_TrackEvaluationContainerv1cLcLEventStruct);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TrackEvaluationContainerv1::EventStruct*)
   {
      return GenerateInitInstanceLocal((::TrackEvaluationContainerv1::EventStruct*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TrackEvaluationContainerv1::EventStruct*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TrackEvaluationContainerv1cLcLEventStruct_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TrackEvaluationContainerv1::EventStruct*)0x0)->GetClass();
      TrackEvaluationContainerv1cLcLEventStruct_TClassManip(theClass);
   return theClass;
   }

   static void TrackEvaluationContainerv1cLcLEventStruct_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TrackEvaluationContainerv1cLcLClusterStruct_Dictionary();
   static void TrackEvaluationContainerv1cLcLClusterStruct_TClassManip(TClass*);
   static void *new_TrackEvaluationContainerv1cLcLClusterStruct(void *p = 0);
   static void *newArray_TrackEvaluationContainerv1cLcLClusterStruct(Long_t size, void *p);
   static void delete_TrackEvaluationContainerv1cLcLClusterStruct(void *p);
   static void deleteArray_TrackEvaluationContainerv1cLcLClusterStruct(void *p);
   static void destruct_TrackEvaluationContainerv1cLcLClusterStruct(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TrackEvaluationContainerv1::ClusterStruct*)
   {
      ::TrackEvaluationContainerv1::ClusterStruct *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TrackEvaluationContainerv1::ClusterStruct));
      static ::ROOT::TGenericClassInfo 
         instance("TrackEvaluationContainerv1::ClusterStruct", "", 80,
                  typeid(::TrackEvaluationContainerv1::ClusterStruct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TrackEvaluationContainerv1cLcLClusterStruct_Dictionary, isa_proxy, 4,
                  sizeof(::TrackEvaluationContainerv1::ClusterStruct) );
      instance.SetNew(&new_TrackEvaluationContainerv1cLcLClusterStruct);
      instance.SetNewArray(&newArray_TrackEvaluationContainerv1cLcLClusterStruct);
      instance.SetDelete(&delete_TrackEvaluationContainerv1cLcLClusterStruct);
      instance.SetDeleteArray(&deleteArray_TrackEvaluationContainerv1cLcLClusterStruct);
      instance.SetDestructor(&destruct_TrackEvaluationContainerv1cLcLClusterStruct);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TrackEvaluationContainerv1::ClusterStruct*)
   {
      return GenerateInitInstanceLocal((::TrackEvaluationContainerv1::ClusterStruct*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TrackEvaluationContainerv1::ClusterStruct*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TrackEvaluationContainerv1cLcLClusterStruct_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TrackEvaluationContainerv1::ClusterStruct*)0x0)->GetClass();
      TrackEvaluationContainerv1cLcLClusterStruct_TClassManip(theClass);
   return theClass;
   }

   static void TrackEvaluationContainerv1cLcLClusterStruct_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TrackEvaluationContainerv1cLcLTrackStruct_Dictionary();
   static void TrackEvaluationContainerv1cLcLTrackStruct_TClassManip(TClass*);
   static void *new_TrackEvaluationContainerv1cLcLTrackStruct(void *p = 0);
   static void *newArray_TrackEvaluationContainerv1cLcLTrackStruct(Long_t size, void *p);
   static void delete_TrackEvaluationContainerv1cLcLTrackStruct(void *p);
   static void deleteArray_TrackEvaluationContainerv1cLcLTrackStruct(void *p);
   static void destruct_TrackEvaluationContainerv1cLcLTrackStruct(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TrackEvaluationContainerv1::TrackStruct*)
   {
      ::TrackEvaluationContainerv1::TrackStruct *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TrackEvaluationContainerv1::TrackStruct));
      static ::ROOT::TGenericClassInfo 
         instance("TrackEvaluationContainerv1::TrackStruct", "", 176,
                  typeid(::TrackEvaluationContainerv1::TrackStruct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TrackEvaluationContainerv1cLcLTrackStruct_Dictionary, isa_proxy, 4,
                  sizeof(::TrackEvaluationContainerv1::TrackStruct) );
      instance.SetNew(&new_TrackEvaluationContainerv1cLcLTrackStruct);
      instance.SetNewArray(&newArray_TrackEvaluationContainerv1cLcLTrackStruct);
      instance.SetDelete(&delete_TrackEvaluationContainerv1cLcLTrackStruct);
      instance.SetDeleteArray(&deleteArray_TrackEvaluationContainerv1cLcLTrackStruct);
      instance.SetDestructor(&destruct_TrackEvaluationContainerv1cLcLTrackStruct);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TrackEvaluationContainerv1::TrackStruct*)
   {
      return GenerateInitInstanceLocal((::TrackEvaluationContainerv1::TrackStruct*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TrackEvaluationContainerv1::TrackStruct*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TrackEvaluationContainerv1cLcLTrackStruct_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TrackEvaluationContainerv1::TrackStruct*)0x0)->GetClass();
      TrackEvaluationContainerv1cLcLTrackStruct_TClassManip(theClass);
   return theClass;
   }

   static void TrackEvaluationContainerv1cLcLTrackStruct_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TrackEvaluationContainerv1::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TrackEvaluationContainerv1::Class_Name()
{
   return "TrackEvaluationContainerv1";
}

//______________________________________________________________________________
const char *TrackEvaluationContainerv1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrackEvaluationContainerv1*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TrackEvaluationContainerv1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrackEvaluationContainerv1*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TrackEvaluationContainerv1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrackEvaluationContainerv1*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TrackEvaluationContainerv1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrackEvaluationContainerv1*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TrackEvaluationContainerv1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TrackEvaluationContainerv1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TrackEvaluationContainerv1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TrackEvaluationContainerv1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TrackEvaluationContainerv1(void *p) {
      return  p ? new(p) ::TrackEvaluationContainerv1 : new ::TrackEvaluationContainerv1;
   }
   static void *newArray_TrackEvaluationContainerv1(Long_t nElements, void *p) {
      return p ? new(p) ::TrackEvaluationContainerv1[nElements] : new ::TrackEvaluationContainerv1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TrackEvaluationContainerv1(void *p) {
      delete ((::TrackEvaluationContainerv1*)p);
   }
   static void deleteArray_TrackEvaluationContainerv1(void *p) {
      delete [] ((::TrackEvaluationContainerv1*)p);
   }
   static void destruct_TrackEvaluationContainerv1(void *p) {
      typedef ::TrackEvaluationContainerv1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TrackEvaluationContainerv1

namespace ROOT {
   // Wrappers around operator new
   static void *new_TrackEvaluationContainerv1cLcLEventStruct(void *p) {
      return  p ? new(p) ::TrackEvaluationContainerv1::EventStruct : new ::TrackEvaluationContainerv1::EventStruct;
   }
   static void *newArray_TrackEvaluationContainerv1cLcLEventStruct(Long_t nElements, void *p) {
      return p ? new(p) ::TrackEvaluationContainerv1::EventStruct[nElements] : new ::TrackEvaluationContainerv1::EventStruct[nElements];
   }
   // Wrapper around operator delete
   static void delete_TrackEvaluationContainerv1cLcLEventStruct(void *p) {
      delete ((::TrackEvaluationContainerv1::EventStruct*)p);
   }
   static void deleteArray_TrackEvaluationContainerv1cLcLEventStruct(void *p) {
      delete [] ((::TrackEvaluationContainerv1::EventStruct*)p);
   }
   static void destruct_TrackEvaluationContainerv1cLcLEventStruct(void *p) {
      typedef ::TrackEvaluationContainerv1::EventStruct current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TrackEvaluationContainerv1::EventStruct

namespace ROOT {
   // Wrappers around operator new
   static void *new_TrackEvaluationContainerv1cLcLClusterStruct(void *p) {
      return  p ? new(p) ::TrackEvaluationContainerv1::ClusterStruct : new ::TrackEvaluationContainerv1::ClusterStruct;
   }
   static void *newArray_TrackEvaluationContainerv1cLcLClusterStruct(Long_t nElements, void *p) {
      return p ? new(p) ::TrackEvaluationContainerv1::ClusterStruct[nElements] : new ::TrackEvaluationContainerv1::ClusterStruct[nElements];
   }
   // Wrapper around operator delete
   static void delete_TrackEvaluationContainerv1cLcLClusterStruct(void *p) {
      delete ((::TrackEvaluationContainerv1::ClusterStruct*)p);
   }
   static void deleteArray_TrackEvaluationContainerv1cLcLClusterStruct(void *p) {
      delete [] ((::TrackEvaluationContainerv1::ClusterStruct*)p);
   }
   static void destruct_TrackEvaluationContainerv1cLcLClusterStruct(void *p) {
      typedef ::TrackEvaluationContainerv1::ClusterStruct current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TrackEvaluationContainerv1::ClusterStruct

namespace ROOT {
   // Wrappers around operator new
   static void *new_TrackEvaluationContainerv1cLcLTrackStruct(void *p) {
      return  p ? new(p) ::TrackEvaluationContainerv1::TrackStruct : new ::TrackEvaluationContainerv1::TrackStruct;
   }
   static void *newArray_TrackEvaluationContainerv1cLcLTrackStruct(Long_t nElements, void *p) {
      return p ? new(p) ::TrackEvaluationContainerv1::TrackStruct[nElements] : new ::TrackEvaluationContainerv1::TrackStruct[nElements];
   }
   // Wrapper around operator delete
   static void delete_TrackEvaluationContainerv1cLcLTrackStruct(void *p) {
      delete ((::TrackEvaluationContainerv1::TrackStruct*)p);
   }
   static void deleteArray_TrackEvaluationContainerv1cLcLTrackStruct(void *p) {
      delete [] ((::TrackEvaluationContainerv1::TrackStruct*)p);
   }
   static void destruct_TrackEvaluationContainerv1cLcLTrackStruct(void *p) {
      typedef ::TrackEvaluationContainerv1::TrackStruct current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TrackEvaluationContainerv1::TrackStruct

namespace ROOT {
   static TClass *vectorlETrackEvaluationContainerv1cLcLTrackStructgR_Dictionary();
   static void vectorlETrackEvaluationContainerv1cLcLTrackStructgR_TClassManip(TClass*);
   static void *new_vectorlETrackEvaluationContainerv1cLcLTrackStructgR(void *p = 0);
   static void *newArray_vectorlETrackEvaluationContainerv1cLcLTrackStructgR(Long_t size, void *p);
   static void delete_vectorlETrackEvaluationContainerv1cLcLTrackStructgR(void *p);
   static void deleteArray_vectorlETrackEvaluationContainerv1cLcLTrackStructgR(void *p);
   static void destruct_vectorlETrackEvaluationContainerv1cLcLTrackStructgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TrackEvaluationContainerv1::TrackStruct>*)
   {
      vector<TrackEvaluationContainerv1::TrackStruct> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TrackEvaluationContainerv1::TrackStruct>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TrackEvaluationContainerv1::TrackStruct>", -2, "vector", 339,
                  typeid(vector<TrackEvaluationContainerv1::TrackStruct>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETrackEvaluationContainerv1cLcLTrackStructgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TrackEvaluationContainerv1::TrackStruct>) );
      instance.SetNew(&new_vectorlETrackEvaluationContainerv1cLcLTrackStructgR);
      instance.SetNewArray(&newArray_vectorlETrackEvaluationContainerv1cLcLTrackStructgR);
      instance.SetDelete(&delete_vectorlETrackEvaluationContainerv1cLcLTrackStructgR);
      instance.SetDeleteArray(&deleteArray_vectorlETrackEvaluationContainerv1cLcLTrackStructgR);
      instance.SetDestructor(&destruct_vectorlETrackEvaluationContainerv1cLcLTrackStructgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TrackEvaluationContainerv1::TrackStruct> >()));

      ::ROOT::AddClassAlternate("vector<TrackEvaluationContainerv1::TrackStruct>","std::vector<TrackEvaluationContainerv1::TrackStruct, std::allocator<TrackEvaluationContainerv1::TrackStruct> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TrackEvaluationContainerv1::TrackStruct>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETrackEvaluationContainerv1cLcLTrackStructgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TrackEvaluationContainerv1::TrackStruct>*)0x0)->GetClass();
      vectorlETrackEvaluationContainerv1cLcLTrackStructgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETrackEvaluationContainerv1cLcLTrackStructgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETrackEvaluationContainerv1cLcLTrackStructgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TrackEvaluationContainerv1::TrackStruct> : new vector<TrackEvaluationContainerv1::TrackStruct>;
   }
   static void *newArray_vectorlETrackEvaluationContainerv1cLcLTrackStructgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TrackEvaluationContainerv1::TrackStruct>[nElements] : new vector<TrackEvaluationContainerv1::TrackStruct>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETrackEvaluationContainerv1cLcLTrackStructgR(void *p) {
      delete ((vector<TrackEvaluationContainerv1::TrackStruct>*)p);
   }
   static void deleteArray_vectorlETrackEvaluationContainerv1cLcLTrackStructgR(void *p) {
      delete [] ((vector<TrackEvaluationContainerv1::TrackStruct>*)p);
   }
   static void destruct_vectorlETrackEvaluationContainerv1cLcLTrackStructgR(void *p) {
      typedef vector<TrackEvaluationContainerv1::TrackStruct> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TrackEvaluationContainerv1::TrackStruct>

namespace ROOT {
   static TClass *vectorlETrackEvaluationContainerv1cLcLEventStructgR_Dictionary();
   static void vectorlETrackEvaluationContainerv1cLcLEventStructgR_TClassManip(TClass*);
   static void *new_vectorlETrackEvaluationContainerv1cLcLEventStructgR(void *p = 0);
   static void *newArray_vectorlETrackEvaluationContainerv1cLcLEventStructgR(Long_t size, void *p);
   static void delete_vectorlETrackEvaluationContainerv1cLcLEventStructgR(void *p);
   static void deleteArray_vectorlETrackEvaluationContainerv1cLcLEventStructgR(void *p);
   static void destruct_vectorlETrackEvaluationContainerv1cLcLEventStructgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TrackEvaluationContainerv1::EventStruct>*)
   {
      vector<TrackEvaluationContainerv1::EventStruct> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TrackEvaluationContainerv1::EventStruct>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TrackEvaluationContainerv1::EventStruct>", -2, "vector", 339,
                  typeid(vector<TrackEvaluationContainerv1::EventStruct>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETrackEvaluationContainerv1cLcLEventStructgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TrackEvaluationContainerv1::EventStruct>) );
      instance.SetNew(&new_vectorlETrackEvaluationContainerv1cLcLEventStructgR);
      instance.SetNewArray(&newArray_vectorlETrackEvaluationContainerv1cLcLEventStructgR);
      instance.SetDelete(&delete_vectorlETrackEvaluationContainerv1cLcLEventStructgR);
      instance.SetDeleteArray(&deleteArray_vectorlETrackEvaluationContainerv1cLcLEventStructgR);
      instance.SetDestructor(&destruct_vectorlETrackEvaluationContainerv1cLcLEventStructgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TrackEvaluationContainerv1::EventStruct> >()));

      ::ROOT::AddClassAlternate("vector<TrackEvaluationContainerv1::EventStruct>","std::vector<TrackEvaluationContainerv1::EventStruct, std::allocator<TrackEvaluationContainerv1::EventStruct> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TrackEvaluationContainerv1::EventStruct>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETrackEvaluationContainerv1cLcLEventStructgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TrackEvaluationContainerv1::EventStruct>*)0x0)->GetClass();
      vectorlETrackEvaluationContainerv1cLcLEventStructgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETrackEvaluationContainerv1cLcLEventStructgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETrackEvaluationContainerv1cLcLEventStructgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TrackEvaluationContainerv1::EventStruct> : new vector<TrackEvaluationContainerv1::EventStruct>;
   }
   static void *newArray_vectorlETrackEvaluationContainerv1cLcLEventStructgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TrackEvaluationContainerv1::EventStruct>[nElements] : new vector<TrackEvaluationContainerv1::EventStruct>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETrackEvaluationContainerv1cLcLEventStructgR(void *p) {
      delete ((vector<TrackEvaluationContainerv1::EventStruct>*)p);
   }
   static void deleteArray_vectorlETrackEvaluationContainerv1cLcLEventStructgR(void *p) {
      delete [] ((vector<TrackEvaluationContainerv1::EventStruct>*)p);
   }
   static void destruct_vectorlETrackEvaluationContainerv1cLcLEventStructgR(void *p) {
      typedef vector<TrackEvaluationContainerv1::EventStruct> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TrackEvaluationContainerv1::EventStruct>

namespace ROOT {
   static TClass *vectorlETrackEvaluationContainerv1cLcLClusterStructgR_Dictionary();
   static void vectorlETrackEvaluationContainerv1cLcLClusterStructgR_TClassManip(TClass*);
   static void *new_vectorlETrackEvaluationContainerv1cLcLClusterStructgR(void *p = 0);
   static void *newArray_vectorlETrackEvaluationContainerv1cLcLClusterStructgR(Long_t size, void *p);
   static void delete_vectorlETrackEvaluationContainerv1cLcLClusterStructgR(void *p);
   static void deleteArray_vectorlETrackEvaluationContainerv1cLcLClusterStructgR(void *p);
   static void destruct_vectorlETrackEvaluationContainerv1cLcLClusterStructgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TrackEvaluationContainerv1::ClusterStruct>*)
   {
      vector<TrackEvaluationContainerv1::ClusterStruct> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TrackEvaluationContainerv1::ClusterStruct>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TrackEvaluationContainerv1::ClusterStruct>", -2, "vector", 339,
                  typeid(vector<TrackEvaluationContainerv1::ClusterStruct>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETrackEvaluationContainerv1cLcLClusterStructgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TrackEvaluationContainerv1::ClusterStruct>) );
      instance.SetNew(&new_vectorlETrackEvaluationContainerv1cLcLClusterStructgR);
      instance.SetNewArray(&newArray_vectorlETrackEvaluationContainerv1cLcLClusterStructgR);
      instance.SetDelete(&delete_vectorlETrackEvaluationContainerv1cLcLClusterStructgR);
      instance.SetDeleteArray(&deleteArray_vectorlETrackEvaluationContainerv1cLcLClusterStructgR);
      instance.SetDestructor(&destruct_vectorlETrackEvaluationContainerv1cLcLClusterStructgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TrackEvaluationContainerv1::ClusterStruct> >()));

      ::ROOT::AddClassAlternate("vector<TrackEvaluationContainerv1::ClusterStruct>","std::vector<TrackEvaluationContainerv1::ClusterStruct, std::allocator<TrackEvaluationContainerv1::ClusterStruct> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TrackEvaluationContainerv1::ClusterStruct>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETrackEvaluationContainerv1cLcLClusterStructgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TrackEvaluationContainerv1::ClusterStruct>*)0x0)->GetClass();
      vectorlETrackEvaluationContainerv1cLcLClusterStructgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETrackEvaluationContainerv1cLcLClusterStructgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETrackEvaluationContainerv1cLcLClusterStructgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TrackEvaluationContainerv1::ClusterStruct> : new vector<TrackEvaluationContainerv1::ClusterStruct>;
   }
   static void *newArray_vectorlETrackEvaluationContainerv1cLcLClusterStructgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TrackEvaluationContainerv1::ClusterStruct>[nElements] : new vector<TrackEvaluationContainerv1::ClusterStruct>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETrackEvaluationContainerv1cLcLClusterStructgR(void *p) {
      delete ((vector<TrackEvaluationContainerv1::ClusterStruct>*)p);
   }
   static void deleteArray_vectorlETrackEvaluationContainerv1cLcLClusterStructgR(void *p) {
      delete [] ((vector<TrackEvaluationContainerv1::ClusterStruct>*)p);
   }
   static void destruct_vectorlETrackEvaluationContainerv1cLcLClusterStructgR(void *p) {
      typedef vector<TrackEvaluationContainerv1::ClusterStruct> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TrackEvaluationContainerv1::ClusterStruct>

namespace {
  void TriggerDictionaryInitialization_TrackEvaluationContainerv1_Dict_Impl() {
    static const char* headers[] = {
"0",
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TrackEvaluationContainerv1_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class TrackEvaluationContainerv1;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TrackEvaluationContainerv1_Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// Tell emacs that this is a C++ source
// -*- C++ -*-.

#ifndef G4EVAL_TRACKEVALUATIONCONTAINERV1_H
#define G4EVAL_TRACKEVALUATIONCONTAINERV1_H

/*!
 * \file TrackEvaluationContainerv1.h
 * \author Hugo Pereira Da Costa <hugo.pereira-da-costa@cea.fr>
 */

#include "TrackEvaluationContainer.h"

#include <vector>

//! track evaluation container
/*!
  Contains:
  - some global quantities, such as number of clusters in tracking detectors
  - relevant information on clusters,
  - relevant information on tracks, including redundant information about participating clusters
  Each of those can be turned on/off using flags in the filling module at runtime

  IMPORTANT NOTE: do not modify and commit neither this class or subclasses. 
  This will render past DSTs containing the container unreadible
  If you plan permanent modification to the class you need to create a TrackEvaluationContainerv2, 
  copy the relevant code from this one there and modify the TrackEvaluation module in order to use the new container
*/
class TrackEvaluationContainerv1: public TrackEvaluationContainer
{
  
  public:
  
  //! constructor
  explicit TrackEvaluationContainerv1()
  {
    // only one event structure per event (!)
    m_events.reserve(1);
  }
   
  //! reset
  void Reset() override;

  //! event information
  /*! do not modify and commit: this will break reading past DSTs */
  class EventStruct
  {

    public:
    using List = std::vector<EventStruct>;
    static constexpr size_t max_layer = 57;

    // constructor
    EventStruct()
    {
      for( size_t i = 0; i < max_layer; ++i )
      { nclusters[i] = 0; }
    }
    
    //! number of clusters per layer / event
    int nclusters[max_layer];

    //! number of clusters in the TPC
    int nclusters_mvtx = 0;

    //! number of clusters in the intt
    int nclusters_intt = 0;

    //! number of clusters in the TPC
    int nclusters_tpc = 0;

    //! number of clusters in the Micromegas
    int nclusters_micromegas = 0;
  };
  
  //! cluster information
  /*! do not modify and commit: this will break reading past DSTs */
  class ClusterStruct
  {
    public:

    using List = std::vector<ClusterStruct>;

    //! cluster layer
    unsigned int layer = 0;

    //! number of hits belonging to the cluster
    unsigned int size = 0;

    //! number of g4hits associated to this cluster
    unsigned int truth_size = 0;

    //! number of hits along phi and along z
    int phi_size = 0;
    int z_size = 0;

    //!@name cluster position
    //@{
    float x = 0;
    float y = 0;
    float z = 0;
    float r = 0;
    float phi = 0;
    float phi_error = 0;
    float z_error = 0;
    //@}

    //!@name track position at cluster
    //@{
    float trk_x = 0;
    float trk_y = 0;
    float trk_z = 0;
    float trk_r = 0;
    float trk_phi = 0;

    //! track errors
    float trk_phi_error = 0;
    float trk_z_error = 0;

    //! track inclination at cluster in r,phi plane
    float trk_alpha = 0;

    //! track inclination at cluster in r,z plane
    float trk_beta = 0;

    //@}

    //!@name truth position
    //@{
    float truth_x = 0;
    float truth_y = 0;
    float truth_z = 0;
    float truth_r = 0;
    float truth_phi = 0;

    //! track inclination at cluster in r,phi plane
    float truth_alpha = 0;

    //! track inclination at cluster in r,z plane
    float truth_beta = 0;
    //@}

    //!@name charges
    //@{

    //* maximum charge on strip
    float energy_max = 0;

    //* sum of strip charges
    float energy_sum = 0;

    //@}

    //!@name track local momentum information
    //!TODO: in principle trk_alpha and trk_beta can be calculated from those. There should be no need to store them
    //@{
    float trk_px = 0;
    float trk_py = 0;
    float trk_pz = 0;
    //@}

    //!@name truth local momentum information
    //!TODO: in principle truth_alpha and truth_beta can be calculated from those. There should be no need to store them
    //@{
    float truth_px = 0;
    float truth_py = 0;
    float truth_pz = 0;
    //@}

  };

  //! track information
  /*! do not modify and commit: this will break reading past DSTs */
  class TrackStruct
  {
    public:

    // constructor
    explicit TrackStruct()
    {   
      // allocate enough size for the clusters
      static constexpr int max_layers = 60;
      clusters.reserve( max_layers );
    }

    using List = std::vector<TrackStruct>;

    int charge = 0;
    int nclusters = 0;
    int64_t mask = 0;

    int nclusters_mvtx = 0;
    int nclusters_intt = 0;
    int nclusters_tpc = 0;
    int nclusters_micromegas = 0;

    float chisquare = 0;
    int ndf = 0;

    //!@name position
    //@{
    float x = 0;
    float y = 0;
    float z = 0;
    float r = 0;
    float phi = 0;
    //@}

    //!@name momentum
    //@{
    float px = 0;
    float py = 0;
    float pz = 0;
    float pt = 0;
    float p = 0;
    float eta = 0;
    //@}

    //!@name truth momentum
    //@{
    int pid = 0;
    int embed = 0;
    bool is_primary = false;

    // number of g4hits from this MC track that match
    int contributors = 0;

    float truth_px = 0;
    float truth_py = 0;
    float truth_pz = 0;
    float truth_pt = 0;
    float truth_p = 0;
    float truth_eta = 0;
    //@}

    // associate clusters
    ClusterStruct::List clusters;
  };
  
  //!@name accessors
  //@{

  const EventStruct::List& events() const 
  { return m_events; }
  
  const ClusterStruct::List& clusters() const
  { return m_clusters; }
  
  const TrackStruct::List& tracks() const
  { return m_tracks; }
  
  //@}
  
  //!@name modifiers
  //@{

  void addEvent( const EventStruct& event )
  { m_events.push_back( event ); }
  
  void addCluster( const ClusterStruct& cluster )
  { m_clusters.push_back( cluster ); }
  
  void addTrack( const TrackStruct& track )
  { m_tracks.push_back( track ); }

  void clearEvents()
  { m_events.clear(); }
  
  void clearClusters()
  { m_clusters.clear(); }
  
  void clearTracks()
  { m_tracks.clear(); }
  
  //@}
  
  private:

  //! event struct
  /* there is only one element per event in this array */
  EventStruct::List m_events;
 
  //! clusters array
  ClusterStruct::List m_clusters;
 
  //! tracks array
  TrackStruct::List m_tracks;
    
  ClassDefOverride(TrackEvaluationContainerv1,1)
    
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TrackEvaluationContainerv1", payloadCode, "@",
"TrackEvaluationContainerv1::ClusterStruct", payloadCode, "@",
"TrackEvaluationContainerv1::EventStruct", payloadCode, "@",
"TrackEvaluationContainerv1::TrackStruct", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TrackEvaluationContainerv1_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TrackEvaluationContainerv1_Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TrackEvaluationContainerv1_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TrackEvaluationContainerv1_Dict() {
  TriggerDictionaryInitialization_TrackEvaluationContainerv1_Dict_Impl();
}
