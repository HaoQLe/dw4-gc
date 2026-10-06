#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056548(void *,void *,void *,void *,void *,void *,void *);
}
extern "C" {
void fn_8008A120(int p0,int p1,int p2,int p3,int p4){
 fn_80056548((void *)p1,(void *)p2,(void *)p3,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+116),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+120),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+124),(void *)p4);
}
int fn_8008A164(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+152);}
void fn_8008A16C(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+152)=value;}
}
#pragma pop
