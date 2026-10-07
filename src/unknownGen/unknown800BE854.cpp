#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800F9540(void *,float);
void *fn_800F955C(void *,void *);
void *fn_800F9578(void *,void *);
void *fn_800F95CC(void *,float);
void *fn_800F95E8(void *,float);
}
extern "C" {
int fn_800BE854(){return 128;}
void fn_800BE85C(int p0,int p1){
 fn_800F955C((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
 float value0=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+24);
 fn_800F9540((void *)p1,value0);
 fn_800F9578((void *)p1,(reinterpret_cast<char *>((void *)p0)+28));
 float value1=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+16);
 fn_800F95CC((void *)p1,value1);
 float value2=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+20);
 fn_800F95E8((void *)p1,value2);
}
}
#pragma pop
