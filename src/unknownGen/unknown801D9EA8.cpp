#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80069128(void *,void *);
void fn_801EA418(void *,int,int);
}
extern "C" {
void fn_801D9EA8(int p0,int p1,int p2){
 fn_801EA418((void *)p1,4,1);
 fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44),(void *)p1);
 fn_80069128(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40),(void *)p2);
}
}
#pragma pop
