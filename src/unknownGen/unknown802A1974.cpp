#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A17C4(void *,...);
extern char lbl_8041A618[];
extern char lbl_8041A63C[];
}
extern "C" {
void fn_802A1974(int p0,int p1){
 if((unsigned int)p0==0){
  fn_802A17C4(lbl_8041A618,(void *)p1);
  return;
 } else {
  if(((int)p1<0||(int)p1>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24))){
   fn_802A17C4(lbl_8041A63C,(void *)p1);
   return;
  } else {
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)p1;
   return;
  }
 }
}
}
#pragma pop
