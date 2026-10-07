#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D0();
void fn_801A2D4C(void *,void *,void *);
void fn_801A2DE4(void *,void *,void *);
}
extern "C" {
void fn_801A2CBC(){return fn_800667D0();}
void fn_801A2CDC(){return fn_800667D0();}
void fn_801A2CFC(int p0,int p1,int p2){
 fn_801A2D4C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44),(void *)p1,(void *)p2);
 fn_801A2DE4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40),(void *)p1,(void *)p2);
}
}
#pragma pop
