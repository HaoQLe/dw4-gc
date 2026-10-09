#include <unknownGen.h>
#include <meta/beModelCtrlSCEffect.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80305ED0(void *,void *,void *,void *,void *);
extern char lbl_80426AB4[];
extern char lbl_80426AD8[];
}
extern "C" {
void beModelCtrlSCEffect_virtual64(int p0,int p1){
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+8)){
  if((int)(int)(void *)reinterpret_cast<Meta::beModelCtrlSCEffect *>((void *)p0)->_geneRamNo!=-1){
   fn_80305ED0(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16))+20),lbl_80426AB4,(void *)reinterpret_cast<Meta::beModelCtrlSCEffect *>((void *)p0)->_modelName,(void *)reinterpret_cast<Meta::beModelCtrlSCEffect *>((void *)p0)->_geneRamNo,lbl_80426AD8);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
