#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802764A4(void *,int);
void fn_80276518(void *);
}
extern "C" {
void fn_802765B8(int p0,int p1){
 fn_80276518((void *)p0);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4)==-1){
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8)==-1){
   fn_802764A4((void *)p0,1);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
