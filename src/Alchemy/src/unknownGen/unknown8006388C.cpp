#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800638E0(void *);
void *fn_80066710(void *);
extern char lbl_80471914[];
}
extern "C" {
void *fn_8006388C(void *p0){
 fn_80066710(p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+0)=lbl_80471914;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+12)=(void *)0;
 if((unsigned int)(int)p0!=0){
  fn_800638E0(p0);
 }
 return p0;
}
}
#pragma pop
