#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8027367C(void *,int);
void fn_802739F0(void *,int);
void fn_80274078(void *,int,int);
void fn_802740CC(void *,int);
}
extern "C" {
void *fn_80274D80(int p0){
 fn_80274078((void *)p0,1,4);
 fn_802740CC((void *)p0,2);
 fn_8027367C((void *)p0,1);
 return (void *)1;
}
void *fn_80274DD0(int p0){
 fn_80274078((void *)p0,1,4);
 fn_802740CC((void *)p0,2);
 fn_802740CC((void *)p0,3);
 fn_802739F0((void *)p0,1);
 return (void *)1;
}
}
#pragma pop
