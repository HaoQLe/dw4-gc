#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006CC88(void *,void *);
void *fn_8006CCE0();
extern char lbl_8047693C[];
}
extern "C" {
void *fn_80071E94(void *p0,void *p1){
 fn_8006CC88(p0,p1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+0)=lbl_8047693C;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+56)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p1)+56);
 return p0;
}
void *fn_80071EE4(){return fn_8006CCE0();}
}
#pragma pop
