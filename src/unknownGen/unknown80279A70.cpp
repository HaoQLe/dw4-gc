#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80416690[];
void strcpy(void *,void *,void *);
}
extern "C" {
void fn_80279A70(int p0,int p1){
 if((int)p0<256){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+0)=(unsigned char)(int)(void *)p0;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+1)=0;
  return;
 } else {
  strcpy((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)((int)lbl_80416690+(p0<<2)))+-1028),lbl_80416690);
  return;
 }
}
}
#pragma pop
