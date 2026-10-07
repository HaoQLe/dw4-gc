#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_80086414(int p0,int p1,int p2){
 void *value0;
 value0=(void *)4;
 if((unsigned int)(unsigned short)p2>=4){
  value0=(void *)(int)(unsigned short)p2;
 }
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p1)+124)=(short)(int)value0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
