#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800607F4(void *);
extern char lbl_80562298[1];
}
extern "C" {
void *fn_80360FD4(int p0,int p1){
 void *value0;
 void *value1;
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
  value0=(void *)p1;
 } else {
  value1=fn_800607F4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0));
  value0=value1;
 }
 return value0;
}
}
#pragma pop
