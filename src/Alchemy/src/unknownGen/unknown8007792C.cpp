#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void fn_800904A0(void *,int);
extern char lbl_804701F8[];
}
extern "C" {
void *fn_8007792C(int p0,int p1){
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804701F8;
  fn_800904A0((void *)p0,0);
  if((int)(short)p1>0){
   __dl__FPv((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
