#include <unknownGen.h>
#include <meta/igBoolList.h>
#include <meta/igCharList.h>
#include <meta/igDependencyList.h>
#include <meta/igDoubleList.h>
#include <meta/igFloatList.h>
#include <meta/igIntList.h>
#include <meta/igLongList.h>
#include <meta/igMemoryDescriptorList.h>
#include <meta/igPointerList.h>
#include <meta/igShortList.h>
#include <meta/igUnsignedCharList.h>
#include <meta/igUnsignedLongList.h>
#include <meta/igUnsignedShortList.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004155C(void *,void *,int);
extern void *igThread_meta;
extern void *igStringRefList_meta;
extern void *igStringObj_meta;
extern void *igRegistryValue_meta;
extern void *igPluginRepository_meta;
extern void *igObjectList_meta;
extern void *igNamedObject_meta;
extern void *igMetaObject_meta;
extern void *igMetaField_meta;
extern void *igMemoryPoolInfo_meta;
extern void *igMemoryFileEntry_meta;
extern void *lbl_80561974;
extern void *igLibrary_meta;
extern void *igInfo_meta;
extern void *igDirectory_meta;
extern void *igDirEntry_meta;
extern void *igMetaObjectList_meta;
extern void *igPointerList_meta;
extern void *igFloatList_meta;
extern void *igShortList_meta;
extern void *igUnsignedShortList_meta;
extern void *igIntList_meta;
extern void *igContextExtInfo_meta;
extern void *igContextExt_meta;
}
extern "C" {
void *igContextExtList_virtual60(){return igContextExt_meta;}
void *igContextExtInfoList_virtual60(){return igContextExtInfo_meta;}
void *fn_80094318(){return lbl_80561974;}
void *igMemoryFileEntryList_virtual60(){return igMemoryFileEntry_meta;}
void *igMemoryPoolInfoList_virtual60(){return igMemoryPoolInfo_meta;}
void *igInfoList_virtual60(){return igInfo_meta;}
void *igPluginRepositoryList_virtual60(){return igPluginRepository_meta;}
void *igRegistryValueList_virtual60(){return igRegistryValue_meta;}
void *igDirectoryList_virtual60(){return igDirectory_meta;}
void *igDirectory_virtual60(){return igDirEntry_meta;}
void *igStringObjList_virtual60(){return igStringObj_meta;}
void *igThreadList_virtual60(){return igThread_meta;}
void *fn_80094368(){return igNamedObject_meta;}
void *igLibraryList_virtual60(){return igLibrary_meta;}
void *igStringRefListList_virtual60(){return igStringRefList_meta;}
void *igObjectListList_virtual60(){return igObjectList_meta;}
void *igIntListList_virtual60(){return igIntList_meta;}
void *igMetaFieldList_virtual60(){return igMetaField_meta;}
void *igMetaObjectListList_virtual60(){return igMetaObjectList_meta;}
void *igMetaObjectList_virtual60(){return igMetaObject_meta;}
void *igPointerListList_virtual60(){return igPointerList_meta;}
void *igFloatListList_virtual60(){return igFloatList_meta;}
void *igShortListList_virtual60(){return igShortList_meta;}
void *igUnsignedShortListList_virtual60(){return igUnsignedShortList_meta;}
void igBoolList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igBoolList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igBoolList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igBoolList *>((void *)p0)->_count,1);
  return;
 } else {
  return;
 }
}
void igCharList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igCharList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igCharList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igCharList *>((void *)p0)->_count,1);
  return;
 } else {
  return;
 }
}
void igIntList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igIntList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igIntList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igIntList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igUnsignedLongList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igUnsignedLongList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igUnsignedLongList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igUnsignedLongList *>((void *)p0)->_count,8);
  return;
 } else {
  return;
 }
}
void igLongList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igLongList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igLongList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igLongList *>((void *)p0)->_count,8);
  return;
 } else {
  return;
 }
}
void fn_800944CC(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  fn_8004155C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),4);
  return;
 } else {
  return;
 }
}
void igUnsignedShortList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igUnsignedShortList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igUnsignedShortList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igUnsignedShortList *>((void *)p0)->_count,2);
  return;
 } else {
  return;
 }
}
void igShortList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igShortList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igShortList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igShortList *>((void *)p0)->_count,2);
  return;
 } else {
  return;
 }
}
void igUnsignedCharList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igUnsignedCharList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igUnsignedCharList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igUnsignedCharList *>((void *)p0)->_count,1);
  return;
 } else {
  return;
 }
}
void igFloatList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igFloatList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igFloatList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igFloatList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igDoubleList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igDoubleList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igDoubleList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igDoubleList *>((void *)p0)->_count,8);
  return;
 } else {
  return;
 }
}
void igPointerList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igPointerList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igPointerList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igPointerList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void igDependencyList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igDependencyList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igDependencyList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igDependencyList *>((void *)p0)->_count,8);
  return;
 } else {
  return;
 }
}
void igMemoryDescriptorList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igMemoryDescriptorList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igMemoryDescriptorList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igMemoryDescriptorList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
}
#pragma pop
