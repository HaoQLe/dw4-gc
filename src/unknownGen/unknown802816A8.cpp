#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_804168A4[];
}
extern "C" {
void *fn_802816A8(int p0,int p1){
 if((int)p0>=6){
  return (void *)1;
 }
 return (void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)((int)lbl_804168A4+(p0*15)))+p1);
}
}
#pragma pop
