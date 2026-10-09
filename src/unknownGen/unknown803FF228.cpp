#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803F2F94(void *);
void fn_803FA27C(void *,...);
void fn_803FDDAC(int);
extern char lbl_8046199C[];
}
extern "C" {
void *fn_803FF228(int p0){
 void *value1;
 void *value0;
 void *value2;
 if((unsigned int)p0==0){
  value1=(void *)0;
 } else {
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4);
 }
 if((int)(int)value1==0){
  fn_803FDDAC(-12);
  fn_803FA27C(lbl_8046199C);
  return (void *)0;
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
  if((int)(int)value0==2){
   value2=fn_803F2F94(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64));
   if(((int)(int)value2==4||(int)(int)value2==6)){
    return (void *)2;
   } else {
    if((int)(int)value2<0){
     return (void *)4;
    } else {
     return (void *)1;
    }
   }
  }
  return value0;
 }
}
}
#pragma pop
