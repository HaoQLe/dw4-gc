#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80276614(void *,void *);
void fn_8027C1E0(void *);
void *fn_8027E2BC(void *,void *);
void fn_8027E7A4(void *,void *,void *);
}
extern "C" {
void fn_8027E360(int p0,int p1){
 void *local0;
 fn_8027C1E0((void *)p0);
 void *value0=fn_8027E2BC((void *)p0,&local0);
 fn_8027E7A4((void *)p0,value0,(void *)p1);
 fn_80276614((void *)p0,&local0);
}
}
#pragma pop
