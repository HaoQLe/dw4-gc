#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_8041A450[];
extern char lbl_8041A46C[];
extern void *lbl_805265B8;
extern char lbl_805265BC[];
}
extern "C" {
void fn_802A0CB4(int p0){
 if((int)p0==0){
  void *value0=lbl_805265B8;
  if(value0){
   reinterpret_cast<void (*)(void *,void *,void *)>(value0)(*reinterpret_cast<void **>((lbl_805265BC+0)),lbl_8041A450,(void *)0);
  }
 } else {
  if(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+20)){
   reinterpret_cast<void (*)(void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+20))(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
  } else {
   void *value1=lbl_805265B8;
   if(value1){
    reinterpret_cast<void (*)(void *,void *,void *)>(value1)(*reinterpret_cast<void **>((lbl_805265BC+0)),lbl_8041A46C,(void *)0);
   }
  }
 }
}
}
#pragma pop
