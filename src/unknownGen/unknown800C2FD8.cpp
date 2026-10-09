#include <unknownGen.h>
#include <meta/igSubTextureBindAttr.h>
#include <meta/igTextureAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igGamecubeVisualContext_virtual1FC(void *,void *,void *);
}
class UnknownGenV800C2FE0_0 {
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
 virtual void s60(void *);
};
extern "C" {
void igStencilStateAttr_virtual80(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void *igSubTextureBindAttr_virtual60(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 value0=reinterpret_cast<Meta::igSubTextureBindAttr *>((void *)p0)->_texture;
 if(value0){
  if((int)(int)(void *)reinterpret_cast<Meta::igTextureAttr *>(value0)->_texId==-1){
   reinterpret_cast<UnknownGenV800C2FE0_0 *>(value0)->s60((void *)p1);
  }
  value1=reinterpret_cast<Meta::igSubTextureBindAttr *>((void *)p0)->_texture;
  if((int)(int)(void *)reinterpret_cast<Meta::igTextureAttr *>(value1)->_texId>=0){
   value2=igGamecubeVisualContext_virtual1FC((void *)p1,(void *)reinterpret_cast<Meta::igTextureAttr *>(value1)->_texId,(void *)reinterpret_cast<Meta::igSubTextureBindAttr *>((void *)p0)->_unitID);
   return value2;
  } else {
   return value1;
  }
 }
 return value0;
}
void igSubTextureBindAttr_virtual68(){}
void *fn_800C305C(int p0){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+10)=(short)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76);
 return (void *)p0;
}
}
#pragma pop
