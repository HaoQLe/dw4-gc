#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800C7AE8(void *);
}
extern "C" {
void fn_800C7B48(int p0,int p1,int p2){
 fn_800C7AE8((void *)p0);
 if((int)(((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+38)>>5)&0x1)!=0){
  fn_800C7AE8((reinterpret_cast<char *>((void *)p0)+4));
  return;
 } else {
  return;
 }
}
}
#pragma pop
