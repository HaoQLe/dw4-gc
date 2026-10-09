#include <unknownGen.h>
#include <meta/igFieldSource.h>
#include <meta/igMetaField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658F8(void *,void *);
}
class UnknownGenV8016BF28_0 {
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
 virtual void * s58();
};
extern "C" {
void igFieldSource_virtual6C(int p0){
 void *value0;
 void *value4;
 void *value5;
 void *value1;
 void *value2;
 void *value3;
 value0=reinterpret_cast<Meta::igFieldSource *>((void *)p0)->_container;
 if(value0){
  value4=reinterpret_cast<UnknownGenV8016BF28_0 *>(value0)->s58();
  value5=fn_800658F8(value4,(void *)reinterpret_cast<Meta::igFieldSource *>((void *)p0)->_sourceFieldName);
  if((int)(int)value5!=0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value5)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+4)=(reinterpret_cast<char *>(value1)+1);
  }
  value2=reinterpret_cast<Meta::igFieldSource *>((void *)p0)->_sourceField;
  if(value2){
   value3=(void *)reinterpret_cast<Meta::igMetaField *>(value2)->_refCount;
   reinterpret_cast<Meta::igMetaField *>(value2)->_refCount=(unsigned int)(reinterpret_cast<char *>(value3)+-1);
   if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igMetaField *>(value2)->_refCount&0x7FFFFF)){
    fn_80066E1C(value2);
   }
  }
  reinterpret_cast<Meta::igFieldSource *>((void *)p0)->_sourceField=(Meta::igMetaField *)value5;
  return;
 } else {
  return;
 }
}
}
#pragma pop
