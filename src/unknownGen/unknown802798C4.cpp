#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8027F0D0(void *,void *);
extern char lbl_80416690[];
}
extern "C" {
void fn_802798C4(int p0){
 void *value0;
 void *value1;
 value0=(void *)0;
 do {
  value1=fn_8027F0D0((void *)p0,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_80416690)+((int)value0<<2)));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+16)=(void *)(int)(unsigned char)((int)value0+3);
  value0=(reinterpret_cast<char *>(value0)+1);
 } while((int)(int)value0<18);
}
}
#pragma pop
