#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80182D28(void *,void *,void *,void *,int);
extern void *kSuccess__3Gap;
}
extern "C" {
void *fn_8017534C(int p0,int p1,int p2){
 void *value0;
 void *local0;
 value0=(void *)0;
 if(((unsigned int)p2!=0&&(fn_80182D28(&local0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)p2,(void *)p1,1),(int)(int)local0==(int)(int)kSuccess__3Gap))){
  value0=(void *)1;
 }
 return value0;
}
}
#pragma pop
