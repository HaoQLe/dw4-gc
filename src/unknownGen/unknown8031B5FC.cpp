#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern void *lbl_805346A8;
extern void *lbl_80534AAC;
extern void *lbl_80534B90;
extern void *lbl_80535124;
}
extern "C" {
void *fn_8031B5FC(){return lbl_80534B90;}
void fn_8031B60C(){}
void fn_8031B610(){}
void fn_8031B614(int p0){
 void *value0=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_805346A8);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=value0;
 void *value1=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_80534AAC);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=value1;
 void *value2=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),lbl_80535124);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=value2;
}
void fn_8031B684(){}
int fn_8031B688(){return 0;}
}
#pragma pop
