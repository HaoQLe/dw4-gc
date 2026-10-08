#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80272E9C(void *,int);
void fn_80273C9C(void *,void *);
void fn_80274078(void *,int,int);
float fn_80274214(void *,int);
}
extern "C" {
void *fn_80274BD0(int p0){
 fn_80274078((void *)p0,1,4);
 fn_80272E9C((void *)p0,1);
 float value0=fn_80274214((void *)p0,2);
 fn_80273C9C((void *)p0,(void *)(int)value0);
 return (void *)1;
}
}
#pragma pop
