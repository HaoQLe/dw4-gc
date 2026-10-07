#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char __files[];
void *fn_80274120(void *,int,int);
void fputs(void *,void *);
}
extern "C" {
void fn_802746FC(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+8)=(void *)p0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=(reinterpret_cast<char *>((void *)p1)+12);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(void *)0;
}
void *fn_80274714(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0=fn_80274120((void *)p0,1,0);
 fputs(value0,(reinterpret_cast<char *>(__files)+160));
 return (void *)0;
}
}
#pragma pop
