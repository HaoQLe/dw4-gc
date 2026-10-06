#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80063F14(void *,void *);
void fn_80065820(void *,void *);
}
extern "C" {
void fn_80065844(int p0,int p1){
 fn_80063F14((void *)p1,(void *)p1);
 fn_80065820((void *)p0,(void *)p1);
}
}
#pragma pop
