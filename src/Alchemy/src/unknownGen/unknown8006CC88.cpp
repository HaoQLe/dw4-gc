#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800639E4(void *,void *);
void *fn_80063B1C();
void fn_800667D0();
void fn_800691E8(void *,int);
extern char lbl_80471384[];
}
extern "C" {
void *fn_8006CC88(int p0,int p1){
 fn_800639E4((void *)p0,(void *)p1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80471384;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+52)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+52);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+53)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+53);
 return (void *)p0;
}
void *fn_8006CCE0(){return fn_80063B1C();}
unsigned char fn_8006CD00(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+52);}
int fn_8006CD08(){return 4;}
int fn_8006CD10(){return 1;}
void fn_8006CD18(int p0){
 fn_800667D0();
 fn_800691E8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),256);
}
}
#pragma pop
