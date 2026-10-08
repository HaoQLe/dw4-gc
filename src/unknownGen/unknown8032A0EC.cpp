#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066DFC(void *);
void fn_80328940(void *,int);
extern char lbl_804EC19C[];
}
extern "C" {
void *fn_8032A0EC(int p0,int p1){
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804EC19C;
  fn_80328940((void *)p0,0);
  if((int)(short)p1>0){
   fn_80066DFC((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop
