#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006388C(void *);
void fn_8006CC40(void *);
extern char lbl_80471384[];
}
extern "C" {
void *fn_8006CBF4(int p0){
 fn_8006388C((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80471384;
 if((unsigned int)p0!=0){
  fn_8006CC40((void *)p0);
 }
 return (void *)p0;
}
}
#pragma pop
