#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
int fn_80091118(){return -1;}
int fn_80091120(){return -1;}
void *fn_80091128(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=(void *)-1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)-1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+0)=(void *)-1;
 return (void *)p0;
}
void *fn_8009113C(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)-1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+0)=(void *)-1;
 return (void *)1;
}
}
#pragma pop
