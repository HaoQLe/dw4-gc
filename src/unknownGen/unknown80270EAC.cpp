#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80272D8C(void *,int);
void *fn_80272F04(void *,void *);
void *fn_8027327C(void *,int);
void fn_80273450(void *,void *);
void fn_8027367C(void *,void *);
extern char lbl_80560F40[5];
}
extern "C" {
void *fn_80270EAC(int p0,int p1){
 void *value0;
 void *value1;
 value0=fn_80272F04((void *)p0,(void *)p1);
 if((int)(int)value0!=4){
  return (void *)0;
 } else {
  fn_80273450((void *)p0,lbl_80560F40);
  fn_8027367C((void *)p0,(void *)p1);
  value1=fn_8027327C((void *)p0,-1);
  fn_80272D8C((void *)p0,-2);
  return value1;
 }
}
}
#pragma pop
