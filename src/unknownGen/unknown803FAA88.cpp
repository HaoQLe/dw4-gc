#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802A3C08(void *,void *,int);
void fn_803FA27C(void *,...);
void fn_803FB1D0(void *);
extern char lbl_80460930[];
}
extern "C" {
void *fn_803FAA88(int p0){
 void *value0;
 void *value1;
 if(((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44)==0||(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44)==257)){
  value0=(void *)1;
 } else {
  value0=(void *)0;
 }
 if((int)(int)value0==0){
  return (void *)0;
 } else {
  value1=fn_802A3C08(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+404),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+408),0);
  if(!value1){
   fn_803FA27C(lbl_80460930);
   fn_803FB1D0((void *)p0);
   return (void *)0;
  } else {
   return value1;
  }
 }
}
}
#pragma pop
