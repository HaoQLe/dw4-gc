#include <unknownGen.h>
#include <meta/igStringRefList.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004155C(void *,void *,int);
void fn_800667D4();
extern void *igTimer_meta;
extern void *igSymbolTable_meta;
extern void *igStructMetaField_meta;
extern void *lbl_80561564;
extern void *igStringTable_meta;
extern void *igStringRefList_meta;
extern void *lbl_80561594;
extern void *igStringArrayMetaField_meta;
extern void *lbl_805615CC;
extern void *lbl_805615D4;
extern void *igShortArrayMetaField_meta;
extern void *lbl_805615E4;
extern void *igSemaphore_meta;
extern void *lbl_805615F0;
extern void *igResource_meta;
extern void *igRegistry_meta;
extern void *lbl_80561688;
extern void *igRawRefArrayMetaField_meta;
extern void *lbl_805616A0;
extern void *igQueue_meta;
extern void *igPluginHelper_meta;
extern void *igObjectRefArrayMetaField_meta;
extern void *lbl_80561700;
extern void *igNamedObjectInfo_meta;
extern void *igMetaFieldInfo_meta;
extern void *igMemoryRefArrayMetaField_meta;
extern void *lbl_8056184C;
extern void *igMemoryPoolInfo_meta;
extern void *igMemoryPoolContextInfo_meta;
extern void *lbl_805618A4;
extern void *igMemoryFile_meta;
extern void *igMemoryDictionary_meta;
extern void *lbl_80561948;
extern void *igLongTimer_meta;
extern void *igLongMetaField_meta;
extern void *lbl_80561990;
extern void *igLongArrayMetaField_meta;
extern void *lbl_80561998;
extern void *igLocationTable_meta;
extern void *igIntArrayMetaField_meta;
extern void *lbl_805619EC;
extern void *igIGBFile_meta;
extern void *igFolder_meta;
extern void *igFloatMetaField_meta;
extern void *lbl_80561B24;
extern void *igFloatArrayMetaField_meta;
extern void *lbl_80561B2C;
extern void *igFile_meta;
extern void *igExternalInfoEntry_meta;
extern void *igExternalIndexedEntry_meta;
extern void *igExternalDirEntry_meta;
extern void *igEventTracker_meta;
extern void *igEnumArrayMetaField_meta;
extern void *lbl_80561C40;
extern void *igDriverDatabase_meta;
extern void *igDoubleMetaField_meta;
extern void *lbl_80561C98;
extern void *igDoubleArrayMetaField_meta;
extern void *lbl_80561CA0;
extern void *igDirectory_meta;
extern void *igCharArrayMetaField_meta;
extern void *lbl_80561E28;
extern void *igCallStackTracer_meta;
extern void *igCallStackTable_meta;
extern void *igBoolArrayMetaField_meta;
extern void *lbl_80561E54;
extern void *lbl_80561E98;
extern void *igMallocMemoryPool_meta;
extern void *igMemoryDescriptorList_meta;
extern void *igMemoryDescriptorMetaField_meta;
extern void *lbl_80562010;
}
class UnknownGenV80093AC4_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
};
class UnknownGenV80093C2C_1 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
};
extern "C" {
void *igSymbolTable_virtual58(){return igSymbolTable_meta;}
void *igStructMetaField_virtual58(){return igStructMetaField_meta;}
void *igStructMetaField_virtual5C(){return lbl_80561564;}
void *igStringTable_virtual58(){return igStringTable_meta;}
void *igStringRefList_virtual58(){return igStringRefList_meta;}
void igStringRefList_virtual38(int p0){
 reinterpret_cast<UnknownGenV80093AC4_0 *>((void *)p0)->s48();
}
void igStringRefList_virtual48(int p0){
 if((int)(int)(void *)reinterpret_cast<Meta::igStringRefList *>((void *)p0)->_capacity>(int)(int)(void *)reinterpret_cast<Meta::igStringRefList *>((void *)p0)->_count){
  fn_8004155C((void *)p0,(void *)reinterpret_cast<Meta::igStringRefList *>((void *)p0)->_count,4);
  return;
 } else {
  return;
 }
}
void *igStringRefList_virtualB8(){return lbl_80561594;}
void *igStringArrayMetaField_virtual58(){return igStringArrayMetaField_meta;}
void *igStringArrayMetaField_virtual5C(){return lbl_805615CC;}
void *igShortArrayMetaField_virtual58(){return igShortArrayMetaField_meta;}
void *igShortArrayMetaField_virtual5C(){return lbl_805615E4;}
void *igShortArrayMetaField_virtual14C(){return lbl_805615F0;}
void *igResource_virtual58(){return igResource_meta;}
void *igRegistry_virtual58(){return igRegistry_meta;}
void *fn_80093B64(){return lbl_80561688;}
void *igRawRefArrayMetaField_virtual58(){return igRawRefArrayMetaField_meta;}
void *igRawRefArrayMetaField_virtual5C(){return lbl_805616A0;}
void *fn_80093B7C(){return igQueue_meta;}
void *igPluginHelper_virtual58(){return igPluginHelper_meta;}
void *igObjectRefArrayMetaField_virtual58(){return igObjectRefArrayMetaField_meta;}
void *igObjectRefArrayMetaField_virtual5C(){return lbl_80561700;}
void *igNamedObjectInfo_virtual58(){return igNamedObjectInfo_meta;}
void *igMetaFieldInfo_virtual58(){return igMetaFieldInfo_meta;}
void *igMemoryRefArrayMetaField_virtual58(){return igMemoryRefArrayMetaField_meta;}
void *igMemoryRefArrayMetaField_virtual5C(){return lbl_8056184C;}
void *igMemoryPoolInfo_virtual58(){return igMemoryPoolInfo_meta;}
void *igMemoryPoolContextInfo_virtual58(){return igMemoryPoolContextInfo_meta;}
void *fn_80093BCC(){return lbl_805618A4;}
void *igMemoryFile_virtual58(){return igMemoryFile_meta;}
void *igMemoryDictionary_virtual58(){return igMemoryDictionary_meta;}
void *igMemoryDictionary_virtualE4(){return lbl_80561948;}
void *igLongMetaField_virtual58(){return igLongMetaField_meta;}
void *igLongMetaField_virtual5C(){return lbl_80561990;}
void *igLongArrayMetaField_virtual58(){return igLongArrayMetaField_meta;}
void *igLongArrayMetaField_virtual5C(){return lbl_80561998;}
void *igLocationTable_virtual58(){return igLocationTable_meta;}
void *igIntArrayMetaField_virtual58(){return igIntArrayMetaField_meta;}
void *igIntArrayMetaField_virtual5C(){return lbl_805619EC;}
void *igIGBFile_virtual58(){return igIGBFile_meta;}
void fn_80093C2C(int p0){
 reinterpret_cast<UnknownGenV80093C2C_1 *>((void *)p0)->s48();
}
void fn_80093C58(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  fn_8004155C((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),4);
  return;
 } else {
  return;
 }
}
void *igFolder_virtual58(){return igFolder_meta;}
void *igFolder_virtual64(int p0){
 void *value0;
 void *value1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
 if(!value0){
  return (void *)p0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
 return value1;
}
void *igFolder_virtual68(int p0){
 void *value0;
 void *value1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
 if(!value0){
  return (void *)p0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
 return value1;
}
void *igFloatMetaField_virtual58(){return igFloatMetaField_meta;}
void *igFloatMetaField_virtual5C(){return lbl_80561B24;}
void *igFloatArrayMetaField_virtual58(){return igFloatArrayMetaField_meta;}
void *igFloatArrayMetaField_virtual5C(){return lbl_80561B2C;}
void *fn_80093CFC(){return igFile_meta;}
void *igExternalInfoEntry_virtual58(){return igExternalInfoEntry_meta;}
void *igExternalIndexedEntry_virtual58(){return igExternalIndexedEntry_meta;}
void *igExternalDirEntry_virtual58(){return igExternalDirEntry_meta;}
void *igEventTracker_virtual58(){return igEventTracker_meta;}
void *igEnumArrayMetaField_virtual58(){return igEnumArrayMetaField_meta;}
void *igEnumArrayMetaField_virtual5C(){return lbl_80561C40;}
void *igDriverDatabase_virtual58(){return igDriverDatabase_meta;}
void *igDoubleMetaField_virtual58(){return igDoubleMetaField_meta;}
void *igDoubleMetaField_virtual5C(){return lbl_80561C98;}
void *igDoubleArrayMetaField_virtual58(){return igDoubleArrayMetaField_meta;}
void *igDoubleArrayMetaField_virtual5C(){return lbl_80561CA0;}
void *igDirectory_virtual58(){return igDirectory_meta;}
void *igCharArrayMetaField_virtual58(){return igCharArrayMetaField_meta;}
void *igCharArrayMetaField_virtual5C(){return lbl_80561E28;}
void *igCallStackTracer_virtual58(){return igCallStackTracer_meta;}
void *igCallStackTable_virtual58(){return igCallStackTable_meta;}
void *igBoolArrayMetaField_virtual58(){return igBoolArrayMetaField_meta;}
void *igBoolArrayMetaField_virtual5C(){return lbl_80561E54;}
void *fn_80093D94(){return igLongTimer_meta;}
void *fn_80093D9C(){return igTimer_meta;}
void *fn_80093DA4(){return igSemaphore_meta;}
void fn_80093DAC(){return fn_800667D4();}
void *fn_80093DCC(){return lbl_805615D4;}
void *fn_80093DD4(){return lbl_80561E98;}
void *igMemoryDescriptorMetaField_virtual58(){return igMemoryDescriptorMetaField_meta;}
void *igMemoryDescriptorMetaField_virtual5C(){return lbl_80562010;}
void *igMemoryDescriptorList_virtual58(){return igMemoryDescriptorList_meta;}
void *fn_80093DF4(){return igMallocMemoryPool_meta;}
}
#pragma pop
