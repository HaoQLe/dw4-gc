#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801D2044(void *,void *,void *,void *,void *,void *,int);
}
extern "C" {
void fn_801D2810(int p0,int p1,int p2,int p3,int p4){
 void *local0;
 local0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+12);
 fn_801D2044((void *)p0,(void *)p1,(void *)p2,(void *)p3,(void *)p4,&local0,0);
}
}
#pragma pop
