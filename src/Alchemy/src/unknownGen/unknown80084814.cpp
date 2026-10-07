#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80058AF8(void *);
void *fn_80058B34(void *);
void fn_800847CC(void *);
extern char lbl_80473928[];
}
extern "C" {
void *fn_80084814(int p0){
 fn_80058AF8((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80473928;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+120)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+176)=(void *)0;
 if((unsigned int)p0!=0){
  fn_800847CC((void *)p0);
 }
 return (void *)p0;
}
void *fn_8008486C(void *p0){
 fn_80058B34(p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+0)=lbl_80473928;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+120)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+176)=(void *)0;
 return p0;
}
}
#pragma pop
