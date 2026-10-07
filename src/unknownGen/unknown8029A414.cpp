#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80290C54(void *);
void fn_80296810(void *);
extern char lbl_80418AE0[];
}
extern "C" {
void fn_8029A414(int p0){
 fn_80290C54(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
}
void fn_8029A438(){}
void fn_8029A43C(){}
void *fn_8029A440(int p0){
 if((unsigned int)p0==0){
  fn_80296810(lbl_80418AE0);
  return (void *)0;
 } else {
  return (void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+114);
 }
}
}
#pragma pop
