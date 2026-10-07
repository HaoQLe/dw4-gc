#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006388C(void *);
void fn_80075A2C(void *);
extern char lbl_80476E6C[];
}
extern "C" {
int fn_800759D8(){return 4;}
void *fn_800759E0(int p0){
 fn_8006388C((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80476E6C;
 if((unsigned int)p0!=0){
  fn_80075A2C((void *)p0);
 }
 return (void *)p0;
}
}
#pragma pop
