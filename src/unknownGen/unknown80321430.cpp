#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8031FC40(void *);
}
extern "C" {
void beSvUseCheckApi_virtual5C(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)1;
 fn_8031FC40((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(void *)0;
}
}
#pragma pop
