#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800632A4(void *);
void *fn_8006CBF4(void *);
extern char lbl_80476088[];
}
extern "C" {
int fn_80063244(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+76);}
void *fn_8006324C(int p0){
 fn_8006CBF4((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80476088;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+72)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+76)=(void *)0;
 if((unsigned int)p0!=0){
  fn_800632A4((void *)p0);
 }
 return (void *)p0;
}
}
#pragma pop
