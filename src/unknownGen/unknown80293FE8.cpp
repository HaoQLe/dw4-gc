#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8029CCA4(void *);
void fn_8029CCBC(void *);
extern char lbl_8051751C[];
}
extern "C" {
int fn_80293FE8(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+144);}
int fn_80293FF0(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+148);}
void fn_80293FF8(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4)==3){
  fn_8029CCA4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+140)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
  return;
 } else {
  return;
 }
}
void fn_80294040(int p0){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+220)){
  reinterpret_cast<void (*)(void *)>(*reinterpret_cast<void **>((lbl_8051751C+0)))((void *)p0);
 }
 fn_8029CCBC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
}
void fn_80294094(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4)!=0){
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)1;
}
}
#pragma pop
