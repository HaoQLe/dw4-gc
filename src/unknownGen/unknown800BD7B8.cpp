#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800EBDC8(void *,void *);
void fn_800EC01C(void *,void *);
void fn_800EC0F4(void *,float);
void fn_800EC160(void *,int);
}
extern "C" {
void fn_800BD7B8(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_800BD7C0(){}
void fn_800BD7C4(){}
void fn_800BD7C8(){}
void fn_800BD7CC(){}
void fn_800BD7D0(int p0,int p1){
 float value0;
 value0=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+64);
 fn_800EC0F4((void *)p1,value0);
 fn_800EC01C((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60));
 fn_800EC160((void *)p1,(int)(int)(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56)));
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
  fn_800EBDC8((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
  return;
 } else {
  return;
 }
}
}
#pragma pop
