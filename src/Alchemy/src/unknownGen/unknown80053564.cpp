#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800535B8(void *);
void fn_8006388C(void *);
extern char lbl_80475B60[];
}
extern "C" {
int fn_80053564(){return 4;}
void *fn_8005356C(int p0){
 fn_8006388C((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80475B60;
 if((unsigned int)p0!=0){
  fn_800535B8((void *)p0);
 }
 return (void *)p0;
}
}
#pragma pop
