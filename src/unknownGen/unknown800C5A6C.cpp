#include <unknownGen.h>
#include <meta/igTextureConstantAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8010002C(void *,void *,void *);
void *fn_80100084(void *,void *);
}
extern "C" {
void igTextureConstantAttr_virtual60(int p0,int p1){
 fn_8010002C((void *)p1,(void *)(int)reinterpret_cast<Meta::igTextureConstantAttr *>((void *)p0)->_unitID,(void *)reinterpret_cast<Meta::igTextureConstantAttr *>((void *)p0)->_textureConstant);
}
void igTextureConstantAttr_virtual68(int p0,int p1){
 void *value0=fn_80100084((void *)p1,(void *)(int)reinterpret_cast<Meta::igTextureConstantAttr *>((void *)p0)->_unitID);
 reinterpret_cast<Meta::igTextureConstantAttr *>((void *)p0)->_textureConstant=(unsigned int)value0;
}
void *fn_800C5AD4(int p0){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+10)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+16);
 return (void *)p0;
}
}
#pragma pop
