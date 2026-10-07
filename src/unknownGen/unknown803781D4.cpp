#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801285A0(void *);
void fn_80128CF4(void *,void *);
}
extern "C" {
void *fn_803781D4(int p0,int p1){
 fn_80128CF4((void *)p0,(void *)p1);
 return (void *)p0;
}
void *fn_80378204(int p0){
 fn_801285A0((void *)p0);
 return (void *)p0;
}
}
#pragma pop
