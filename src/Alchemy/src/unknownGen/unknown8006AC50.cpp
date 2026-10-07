#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006ACA4(void *);
void *fn_8006CBF4(void *);
extern char lbl_804762FC[];
}
extern "C" {
void *fn_8006AC50(int p0){
 fn_8006CBF4((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804762FC;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+64)=(void *)0;
 if((unsigned int)p0!=0){
  fn_8006ACA4((void *)p0);
 }
 return (void *)p0;
}
}
#pragma pop
