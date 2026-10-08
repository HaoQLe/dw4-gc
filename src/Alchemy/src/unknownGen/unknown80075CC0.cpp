#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800639E4(void *,void *);
extern char lbl_80476F60[];
}
extern "C" {
void *fn_80075CC0(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_800639E4((void *)p0,(void *)p1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80476F60;
 return (void *)p0;
}
}
#pragma pop
