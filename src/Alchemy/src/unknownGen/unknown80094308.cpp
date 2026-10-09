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
extern void *lbl_80561504;
extern void *lbl_8056158C;
extern void *lbl_805615A8;
extern void *lbl_80561674;
extern void *lbl_805616CC;
extern void *lbl_80561708;
extern void *lbl_80561744;
extern void *lbl_8056174C;
extern void *lbl_805617BC;
extern void *lbl_80561858;
extern void *lbl_80561908;
extern void *lbl_80561974;
extern void *lbl_805619C4;
extern void *lbl_805619F8;
extern void *lbl_80561CAC;
extern void *lbl_80561D00;
extern void *lbl_80561D60;
extern void *lbl_80561D68;
extern void *lbl_80561D7C;
extern void *lbl_80561D90;
extern void *lbl_80561D9C;
extern void *lbl_80561DC4;
extern void *lbl_80561DE8;
extern void *lbl_80561DF8;
}
extern "C" {
void *igContextExtList_virtual60(){return lbl_80561DF8;}
void *igContextExtInfoList_virtual60(){return lbl_80561DE8;}
void *fn_80094318(){return lbl_80561974;}
void *igMemoryFileEntryList_virtual60(){return lbl_80561908;}
void *igMemoryPoolInfoList_virtual60(){return lbl_80561858;}
void *igInfoList_virtual60(){return lbl_805619F8;}
void *igPluginRepositoryList_virtual60(){return lbl_805616CC;}
void *igRegistryValueList_virtual60(){return lbl_80561674;}
void *igDirectoryList_virtual60(){return lbl_80561CAC;}
void *igDirectory_virtual60(){return lbl_80561D00;}
void *igStringObjList_virtual60(){return lbl_805615A8;}
void *igThreadList_virtual60(){return lbl_80561504;}
void *fn_80094368(){return lbl_80561744;}
void *igLibraryList_virtual60(){return lbl_805619C4;}
void *igStringRefListList_virtual60(){return lbl_8056158C;}
void *igObjectListList_virtual60(){return lbl_80561708;}
void *igIntListList_virtual60(){return lbl_80561DC4;}
void *igMetaFieldList_virtual60(){return lbl_805617BC;}
void *igMetaObjectListList_virtual60(){return lbl_80561D60;}
void *igMetaObjectList_virtual60(){return lbl_8056174C;}
void *igPointerListList_virtual60(){return lbl_80561D68;}
void *igFloatListList_virtual60(){return lbl_80561D7C;}
void *igShortListList_virtual60(){return lbl_80561D90;}
void *igUnsignedShortListList_virtual60(){return lbl_80561D9C;}
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
