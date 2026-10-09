#include <unknownGen.h>
#include <meta/igIGBFile.h>
#include <meta/igPointerList.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667A8(void *);
}
class UnknownGenV80052000_0 {
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
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void s58();
 virtual void s5C();
 virtual void s60();
 virtual void s64();
 virtual void s68();
 virtual void s6C();
 virtual void s70(void *);
};
extern "C" {
void igIGBFile_virtual10(int p0){
 void *value6;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 value0=reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_refList;
 if(value0){
  value1=(void *)reinterpret_cast<Meta::igPointerList *>(value0)->_count;
  value6=(void *)0;
  while((int)(int)value6<(int)(int)value1){
   reinterpret_cast<UnknownGenV80052000_0 *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_data)+((int)value6<<2)))->s70((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igPointerList *>(reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_refList)->_data)+((int)value6<<2)));
   value6=(reinterpret_cast<char *>(value6)+1);
  }
  value2=reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_refList;
  if(value2){
   value3=(void *)reinterpret_cast<Meta::igPointerList *>(value2)->_refCount;
   reinterpret_cast<Meta::igPointerList *>(value2)->_refCount=(unsigned int)(reinterpret_cast<char *>(value3)+-1);
   if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igPointerList *>(value2)->_refCount&0x7FFFFF)){
    fn_80066E1C(value2);
   }
  }
  reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_refList=(Meta::igPointerList *)0;
 }
 value4=reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_refList;
 if(value4){
  value5=(void *)reinterpret_cast<Meta::igPointerList *>(value4)->_refCount;
  reinterpret_cast<Meta::igPointerList *>(value4)->_refCount=(unsigned int)(reinterpret_cast<char *>(value5)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igPointerList *>(value4)->_refCount&0x7FFFFF)){
   fn_80066E1C(value4);
  }
 }
 reinterpret_cast<Meta::igIGBFile *>((void *)p0)->_refList=(Meta::igPointerList *)0;
 fn_800667A8((void *)p0);
}
}
#pragma pop
