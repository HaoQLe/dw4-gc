#include <unknownGen.h>
#include <meta/igPointSpriteExt.h>
#include <meta/igVertexArray.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igPointSpriteExt_virtual8C(void *,void *,void *,void *,void *);
}
class UnknownGenV800F9DF8_0 {
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
 virtual void s70();
 virtual void s74();
 virtual void s78();
 virtual void s7C();
 virtual void s80();
 virtual void s84();
 virtual void s88();
 virtual void s8C();
 virtual void s90();
 virtual void s94();
 virtual void s98();
 virtual void s9C();
 virtual void sA0();
 virtual void sA4();
 virtual void sA8();
 virtual void sAC();
 virtual void sB0();
 virtual void sB4();
 virtual void sB8();
 virtual void * sBC(void *);
};
class UnknownGenV800F9DF8_1 {
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
 virtual void s60(void *,void *,void *,void *);
};
extern "C" {
void igGamecubePointSpriteExt_virtual8C(int p0,int p1,int p2,int p3,int p4){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 if((int)p1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=reinterpret_cast<Meta::igPointSpriteExt *>((void *)p0)->_vertexArray;
 if(value1){
  value2=(void *)reinterpret_cast<Meta::igVertexArray *>(value1)->_refCount;
  reinterpret_cast<Meta::igVertexArray *>(value1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igVertexArray *>(value1)->_refCount&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 reinterpret_cast<Meta::igPointSpriteExt *>((void *)p0)->_vertexArray=(Meta::igVertexArray *)(void *)p1;
 value3=reinterpret_cast<UnknownGenV800F9DF8_0 *>((void *)p0)->sBC((void *)p2);
 if((unsigned char)(int)value3){
  reinterpret_cast<UnknownGenV800F9DF8_1 *>((void *)p1)->s60((void *)p2,(void *)p3,(void *)(int)(p4|0x10),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+392));
  return;
 } else {
  igPointSpriteExt_virtual8C((void *)p0,(void *)p1,(void *)p2,(void *)p3,(void *)(int)((p4&0xFFFFFFEF)|0x4));
  return;
 }
}
}
#pragma pop
