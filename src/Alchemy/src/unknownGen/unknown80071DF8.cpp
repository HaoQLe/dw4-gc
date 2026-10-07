#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006CBF4(void *);
void fn_80071E44(void *);
extern char lbl_8047693C[];
}
extern "C" {
void *fn_80071DF8(int p0){
 fn_8006CBF4((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_8047693C;
 if((unsigned int)p0!=0){
  fn_80071E44((void *)p0);
 }
 return (void *)p0;
}
}
#pragma pop
