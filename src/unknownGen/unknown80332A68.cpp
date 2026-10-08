#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066DFC(void *);
void fn_803324CC(void *,int);
extern char lbl_804EBDA8[];
}
extern "C" {
void *fn_80332A68(int p0,int p1){
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804EBDA8;
  fn_803324CC((void *)p0,0);
  if((int)(short)p1>0){
   fn_80066DFC((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
