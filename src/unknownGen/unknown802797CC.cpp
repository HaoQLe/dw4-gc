#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802790CC(void *);
void fn_80279270(void *);
void fn_802792EC(void *);
void fn_8027935C(void *);
void fn_802793C8(void *);
void fn_8027947C(void *,void *);
void fn_80279554(void *,void *);
void fn_8027961C(void *);
void fn_80279674(void *,void *);
void fn_8027972C(void *);
extern char lbl_804167B8[];
void fn_802797CC(int,int);
void fn_80279830(int);
}
extern "C" {
void fn_802797CC(int p0,int p1){
 fn_80279554((void *)p0,(void *)p1);
 fn_8027972C((void *)p0);
 fn_8027947C((void *)p0,(void *)p1);
 fn_802793C8((void *)p0);
 fn_802792EC((void *)p0);
 fn_8027935C((void *)p0);
}
void fn_80279830(int p0){
 fn_802790CC((void *)p0);
 fn_80279270((void *)p0);
 fn_802797CC((int)(int)((void *)p0),0);
 fn_8027961C((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+92)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96)<<1);
 fn_80279674((void *)p0,lbl_804167B8);
}
void fn_80279894(int p0){
 if((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96)>=(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+92)){
  fn_80279830((int)(int)((void *)p0));
  return;
 } else {
  return;
 }
}
}
#pragma pop
