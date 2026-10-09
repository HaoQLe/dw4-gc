#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80276058(void *,void *);
void fn_8027C1E0(void *);
void fn_8027C370(void *,int,int,void *);
void fn_8027DA54(void *);
void fn_8027DC08(void *,void *);
void fn_8027DCD4(void *,void *);
void fn_8027DFE8(void *,void *);
void fn_8027E0FC(void *,void *);
void fn_8027E218(void *);
void fn_8027E360(void *,void *);
void fn_8027E3C4(void *);
void fn_8027E458(void *);
void fn_8027E4D0(void *);
extern char lbl_804CA788[];
}
extern "C" {
void *fn_8027E560(int p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
 switch((int)(int)value0){
 case 265:
  fn_8027E0FC((void *)p0,value1);
  return (void *)0;
 case 274:
  fn_8027DC08((void *)p0,value1);
  return (void *)0;
 case 259:
  fn_8027C1E0((void *)p0);
  fn_8027DA54((void *)p0);
  fn_8027C370((void *)p0,262,259,value1);
  return (void *)0;
 case 263:
  fn_8027DFE8((void *)p0,value1);
  return (void *)0;
 case 270:
  fn_8027DCD4((void *)p0,value1);
  return (void *)0;
 case 264:
  fn_8027E360((void *)p0,value1);
  return (void *)0;
 case 266:
  fn_8027E218((void *)p0);
  return (void *)0;
 case 37:
 case 275:
  fn_8027E3C4((void *)p0);
  return (void *)0;
 case 271:
  fn_8027E458((void *)p0);
  return (void *)1;
 case 258:
  fn_8027E4D0((void *)p0);
  return (void *)1;
 default:
  fn_80276058((void *)p0,lbl_804CA788);
  return (void *)0;
 }
}
}
#pragma pop
