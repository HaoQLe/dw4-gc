#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
extern char lbl_804F2294[];
extern void *lbl_805621DC;
}
extern "C" {
void fn_80060630(int p0,int p1){
 if((unsigned int)p1!=0){
  void *value0=lbl_805621DC;
  if((int)(int)value0>=0){
   if((int)(int)value0<4){
    lbl_805621DC=(reinterpret_cast<char *>(value0)+1);
    *reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_804F2294)+((int)value0<<2))=(int)p1;
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4))+1);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
    return;
   }
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
}
}
#pragma pop
