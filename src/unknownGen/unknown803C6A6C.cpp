#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_804003C4(void *,void *,void *,void *);
void fn_8040083C(void *,void *,void *,void *);
void fn_80400BB0(void *,void *,void *,void *);
}
extern "C" {
int fn_803C6A6C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+4);}
void fn_803C6A74(int p0,int p1,int p2){
 fn_804003C4((void *)p2,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+20),(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+21),(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+22));
}
void fn_803C6AA8(int p0,int p1,int p2){
 fn_8040083C((void *)p2,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+20),(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+21),(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+22));
}
void fn_803C6ADC(int p0,int p1,int p2){
 fn_80400BB0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(void *)p2);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
}
}
#pragma pop
