#include <unknownGen.h>
#include <meta/igGeometryAttr1_5.h>
#include <meta/igVertexArray.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068430(int,int);
void fn_800BEB3C();
void *fn_800D0030(void *);
}
class UnknownGenV800BEB88_0 {
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
 virtual void sBC();
 virtual void sC0();
 virtual void sC4();
 virtual void sC8();
 virtual void sCC();
 virtual void sD0();
 virtual void sD4();
 virtual void sD8();
 virtual void sDC();
 virtual void sE0();
 virtual void sE4();
 virtual void sE8();
 virtual void sEC();
};
class UnknownGenV800BEB88_1 {
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
 virtual void * s8C();
};
class UnknownGenV800BEC30_2 {
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
void *igGeometryAttr1_5_virtual70(int p0){
 void *value0;
 void *value1;
 void *value2;
 value0=reinterpret_cast<Meta::igGeometryAttr1_5 *>((void *)p0)->_vertexArray;
 if(value0){
  reinterpret_cast<UnknownGenV800BEB88_0 *>(value0)->sEC();
 }
 value1=reinterpret_cast<Meta::igGeometryAttr1_5 *>((void *)p0)->_indexArray;
 if(value1){
  value2=reinterpret_cast<UnknownGenV800BEB88_1 *>(value1)->s8C();
  return value2;
 } else {
  return value1;
 }
}
void igGamecubeIndexArray_virtual8C(){}
void *fn_800BEBEC(int p0,int p1){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
  return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32))+16))+(p1<<2));
 }
 return (void *)0;
}
void igGeometryAttr1_5_virtual68(){return fn_800BEB3C();}
void igGeometryAttr1_5_virtual80(int p0,int p1,int p2,int p3,int p4){
 void *value5;
 void *value6;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 if(!reinterpret_cast<Meta::igGeometryAttr1_5 *>((void *)p0)->_vertexArray){
  value5=fn_80068430((int)(int)((void *)p0),(int)(int)((void *)p1));
  value6=fn_800D0030(value5);
  if((int)(int)value6!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value0)+1);
  }
  value1=reinterpret_cast<Meta::igGeometryAttr1_5 *>((void *)p0)->_vertexArray;
  if(value1){
   value2=(void *)reinterpret_cast<Meta::igVertexArray *>(value1)->_refCount;
   reinterpret_cast<Meta::igVertexArray *>(value1)->_refCount=(unsigned int)(reinterpret_cast<char *>(value2)+-1);
   if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igVertexArray *>(value1)->_refCount&0x7FFFFF)){
    fn_80066E1C(value1);
   }
  }
  reinterpret_cast<Meta::igGeometryAttr1_5 *>((void *)p0)->_vertexArray=(Meta::igVertexArray *)value6;
  value3=reinterpret_cast<Meta::igGeometryAttr1_5 *>((void *)p0)->_vertexArray;
  value4=(void *)reinterpret_cast<Meta::igVertexArray *>(value3)->_refCount;
  reinterpret_cast<Meta::igVertexArray *>(value3)->_refCount=(unsigned int)(reinterpret_cast<char *>(value4)+-1);
  if(!((unsigned int)(int)(void *)reinterpret_cast<Meta::igVertexArray *>(value3)->_refCount&0x7FFFFF)){
   fn_80066E1C(value3);
  }
 }
 reinterpret_cast<UnknownGenV800BEC30_2 *>(reinterpret_cast<Meta::igGeometryAttr1_5 *>((void *)p0)->_vertexArray)->s60((void *)p1,(void *)p2,(void *)p3,(void *)p4);
}
}
#pragma pop
