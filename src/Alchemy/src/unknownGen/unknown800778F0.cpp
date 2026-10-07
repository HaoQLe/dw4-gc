#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80090490(void *);
void fn_800904A0(void *,int);
void fn_800A325C(void *);
extern char lbl_804701F8[];
}
extern "C" {
void *fn_800778F0(int p0){
 fn_80090490((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804701F8;
 return (void *)p0;
}
void *fn_8007792C(int p0,int p1){
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804701F8;
  fn_800904A0((void *)p0,0);
  if((int)(short)p1>0){
   fn_800A325C((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
