#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *ParticleTimer_getMeta();
void fn_8020B1A4(void *,void *,void *);
void fn_80319F90(int,int);
extern void *lbl_805656E4;
}
extern "C" {
void fn_8031A048(){
 void *value0=ParticleTimer_getMeta();
 fn_8020B1A4(lbl_805656E4,value0,(void *)fn_80319F90);
}
}
#pragma pop
