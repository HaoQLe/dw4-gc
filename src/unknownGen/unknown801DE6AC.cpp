#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801D92BC(void *,void *);
void fn_801DA7E0(void *,void *);
}
extern "C" {
void *fn_801DE6AC(int p0,int p1){
 fn_801D92BC((void *)p1,(void *)p0);
 return (void *)0;
}
void *fn_801DE6DC(int p0,int p1){
 fn_801DA7E0((void *)p1,(void *)p0);
 return (void *)0;
}
}
#pragma pop
