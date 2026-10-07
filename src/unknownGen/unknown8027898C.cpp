#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void exit(int);
void fn_800A437C(void *,int);
void fn_802788A4(void *,void *);
extern char lbl_804CA310[];
}
extern "C" {
void fn_8027898C(int p0,int p1){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
 if(value0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+404)=(void *)p1;
  fn_800A437C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),1);
  return;
 } else {
  if((int)p1!=4){
   fn_802788A4((void *)p0,lbl_804CA310);
  }
  exit(1);
  return;
 }
}
}
#pragma pop
