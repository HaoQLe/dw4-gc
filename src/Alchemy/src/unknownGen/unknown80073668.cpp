#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800563C4();
void fn_80073888(void *);
}
extern "C" {
void *fn_80073668(){return fn_800563C4();}
void *fn_80073688(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)-1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+32)=1;
 fn_80073888((void *)p0);
 return (void *)p0;
}
}
#pragma pop
