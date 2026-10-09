#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
extern char lbl_804EEAD8[];
}
extern "C" {
void *fn_803B5ACC(int p0,int p1,int p2,int p3,int p4,int p5){
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804EEAD8;
  if((int)(short)p1>0){
   __dl__FPv((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
