#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800442A0(void *,int,void *);
extern char lbl_80490248[];
extern char lbl_80490254[];
extern char lbl_8055EE5C[4];
}
extern "C" {
void *fn_800ED404(void *p0,void *p1,void *p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+72)=p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+84)=p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+76)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+76))+1);
 return p0;
}
void fn_800ED41C(int p0,int p1,int p2,int p3,int p4,int p5){
 fn_800442A0((void *)p1,1,lbl_80490248);
 fn_800442A0((void *)p1,2,lbl_8055EE5C);
 fn_800442A0((void *)p1,3,lbl_80490254);
 fn_800442A0((void *)p1,4,lbl_80490248);
 fn_800442A0((void *)p1,5,lbl_8055EE5C);
}
}
#pragma pop
