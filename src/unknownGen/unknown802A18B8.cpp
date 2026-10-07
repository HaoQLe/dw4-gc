#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A17C4(void *,...);
void *fn_802A25A0();
void *fn_802A25EC();
extern char lbl_8041A618[];
}
extern "C" {
void *fn_802A18B8(){return fn_802A25A0();}
void *fn_802A18D8(){return fn_802A25EC();}
void fn_802A18F8(int p0,int p1){
 if((unsigned int)p0==0){
  fn_802A17C4(lbl_8041A618,(void *)p1);
  return;
 } else {
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+3)=(unsigned char)(int)(void *)p1;
  return;
 }
}
}
#pragma pop
