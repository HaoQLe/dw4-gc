#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80278AFC(void *);
}
extern "C" {
void fn_8027CC28(int p0,int p1){
 void *value0=fn_80278AFC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+8)=(void *)p0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+12)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=(void *)p1;
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p1)+28)=0;
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p1)+30)=0;
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p1)+32)=0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+40)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=value0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+64)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+16)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+20)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+36)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+24)=(void *)-1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+24)=(void *)0;
 *reinterpret_cast<short *>(reinterpret_cast<char *>(value0)+36)=0;
 *reinterpret_cast<short *>(reinterpret_cast<char *>(value0)+32)=0;
 *reinterpret_cast<short *>(reinterpret_cast<char *>(value0)+34)=0;
}
}
#pragma pop
