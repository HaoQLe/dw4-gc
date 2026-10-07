#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803FA27C(void *,...);
extern char lbl_8046159C[];
void strcpy(void *,void *);
void *strlen(void *,void *);
void strncpy(void *,void *,void *);
}
extern "C" {
void fn_803FE1B0(int p0,int p1){
 void *value0;
 value0=strlen((void *)p1,(void *)p1);
 if((int)(int)value0>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+444)){
  fn_803FA27C(lbl_8046159C);
  strncpy(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+440),(void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+444));
  return;
 } else {
  strcpy(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+440),(void *)p1);
  return;
 }
}
}
#pragma pop
