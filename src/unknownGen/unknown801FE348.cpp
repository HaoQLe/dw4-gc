#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801FDCCC();
void fn_801FE2C0(void *,void *,void *);
void fn_801FE3BC(void *,void *);
void fn_802062E0(void *,int,int);
void fn_802063E8(void *);
}
extern "C" {
void fn_801FE348(int p0,int p1){
 void *value0=fn_801FDCCC();
 fn_802062E0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+68),0,0);
 fn_801FE2C0((void *)p0,(void *)p1,value0);
 fn_801FE3BC((void *)p0,(void *)p1);
 fn_802063E8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+68));
}
}
#pragma pop
