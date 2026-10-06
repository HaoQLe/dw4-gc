#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80273A78(void *,int,void *);
}
extern "C" {
void fn_80275AA8(int p0,int p1,int p2){
 fn_80273A78((void *)p0,1,(void *)p1);
 fn_80273A78((void *)p0,1,(void *)p2);
}
}
#pragma pop
