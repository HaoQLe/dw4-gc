#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667A4();
void fn_800667A8();
void fn_800667CC();
void fn_802AE9F0(int,int);
void fn_802AEA80(int,int);
void fn_803FAF7C(void *,void *,void *);
}
extern "C" {
void fn_802ADA40(int p0){
 fn_800667CC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)0;
}
void fn_802ADA7C(int p0){
 fn_800667A4();
 fn_803FAF7C((void *)fn_802AE9F0,(void *)fn_802AEA80,(void *)p0);
}
void fn_802ADAC0(){return fn_800667A8();}
}
#pragma pop
