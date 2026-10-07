#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006388C(void *);
void fn_80075C84(void *);
extern char lbl_80476F60[];
}
extern "C" {
int fn_80075C30(){return 8;}
void *fn_80075C38(int p0){
 fn_8006388C((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80476F60;
 if((unsigned int)p0!=0){
  fn_80075C84((void *)p0);
 }
 return (void *)p0;
}
}
#pragma pop
