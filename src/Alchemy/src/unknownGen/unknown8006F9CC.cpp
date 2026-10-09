#include <unknownGen.h>
#include <meta/igIntList.h>
#include <meta/igResource.h>
#include <meta/igStringObjList.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D4(void *);
void fn_8006F8CC(void *);
}
extern "C" {
void igResource_virtual30(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)==1){
  fn_8006F8CC((void *)p0);
 }
 value0=reinterpret_cast<Meta::igResource *>((void *)p0)->_alignmentStrings;
 if(value0){
  value1=(void *)reinterpret_cast<Meta::igStringObjList *>(value0)->_refCount;
  reinterpret_cast<Meta::igStringObjList *>(value0)->_refCount=(unsigned int)(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igStringObjList *>(value0)->_refCount&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 reinterpret_cast<Meta::igResource *>((void *)p0)->_alignmentStrings=(Meta::igStringObjList *)0;
 value2=reinterpret_cast<Meta::igResource *>((void *)p0)->_alignmentValues;
 if(value2){
  value3=(void *)reinterpret_cast<Meta::igIntList *>(value2)->_refCount;
  reinterpret_cast<Meta::igIntList *>(value2)->_refCount=(unsigned int)(reinterpret_cast<char *>(value3)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igIntList *>(value2)->_refCount&0x7FFFFF)){
   fn_80066E1C(value2);
  }
 }
 reinterpret_cast<Meta::igResource *>((void *)p0)->_alignmentValues=(Meta::igIntList *)0;
 fn_800667D4((void *)p0);
}
}
#pragma pop
