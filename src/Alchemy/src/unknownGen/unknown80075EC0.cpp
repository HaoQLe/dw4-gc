#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006388C(void *);
void fn_80075F0C(void *);
extern char lbl_80477054[];
}
extern "C" {
void *fn_80075EC0(int p0){
 fn_8006388C((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80477054;
 if((unsigned int)p0!=0){
  fn_80075F0C((void *)p0);
 }
 return (void *)p0;
}
}
#pragma pop
