#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006388C(void *);
void fn_80071108(void *);
extern char lbl_80476848[];
}
extern "C" {
void *fn_800710BC(int p0){
 fn_8006388C((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80476848;
 if((unsigned int)p0!=0){
  fn_80071108((void *)p0);
 }
 return (void *)p0;
}
}
#pragma pop
