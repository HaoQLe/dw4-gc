#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
extern char lbl_8046F7C0[];
}
extern "C" {
int igStandardQueue_virtual84(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+40);}
void *fn_80090490(void *p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+0)=lbl_8046F7C0;
 return p0;
}
void *fn_800904A0(int p0,int p1,int p2,int p3,int p4,int p5){
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_8046F7C0;
  if((int)(short)p1>0){
   __dl__FPv((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
