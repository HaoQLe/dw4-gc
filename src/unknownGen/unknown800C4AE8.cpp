#include <unknownGen.h>
#include <meta/igTextureAttr.h>
#include <meta/igTextureUnloadAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igGamecubeVisualContext_virtual208(void *,void *);
}
extern "C" {
void *igTextureUnloadAttr_virtual60(int p0,int p1){
 void *value0;
 void *value1;
 value0=reinterpret_cast<Meta::igTextureUnloadAttr *>((void *)p0)->_texture;
 if(value0){
  if((int)(int)(void *)reinterpret_cast<Meta::igTextureAttr *>(value0)->_texId!=-1){
   value1=igGamecubeVisualContext_virtual208((void *)p1,(void *)reinterpret_cast<Meta::igTextureAttr *>(value0)->_texId);
   return value1;
  } else {
   return value0;
  }
 }
 return value0;
}
}
#pragma pop
