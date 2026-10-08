#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80272D8C(void *,int);
void *fn_80272F04(void *,int);
void *fn_80273DF4(void *,int);
void fn_80274078(void *,int,int);
void fn_80275BB8(void *,int,void *);
}
extern "C" {
void *fn_80275E98(int p0){
 void *value0;
 void *value1;
 fn_80274078((void *)p0,1,4);
 value0=fn_80273DF4((void *)p0,1);
 value1=fn_80272F04((void *)p0,2);
 if((int)(int)value1!=-1){
  fn_80274078((void *)p0,2,5);
 }
 fn_80272D8C((void *)p0,2);
 fn_80275BB8((void *)p0,1,value0);
 return (void *)0;
}
}
#pragma pop
