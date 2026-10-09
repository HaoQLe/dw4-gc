#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800D9140(void *,void *);
void *fn_800DFA5C(void *);
extern char lbl_8055EE1C[5];
extern char lbl_8055EE24[5];
void *strcmp(void *,void *);
}
extern "C" {
void *igClut_virtual5C(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value0=fn_800DFA5C((void *)p1);
 if(((int)(int)value0!=0&&((value1=strcmp(value0,lbl_8055EE1C),(int)(int)value1==0)||(value2=strcmp(value0,lbl_8055EE24),(int)(int)value2==0)))){
  value3=fn_800D9140((void *)p0,(void *)p1);
  return value3;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
