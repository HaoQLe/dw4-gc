#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80272D20(void *,void *);
void *fn_802830D4(void *,void *,void *,void *);
}
extern "C" {
void *fn_8027303C(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 value0=fn_80272D20((void *)p0,(void *)p1);
 value1=fn_80272D20((void *)p0,(void *)p2);
 if((!value0||!value1)){
  return (void *)0;
 } else {
  value2=fn_802830D4((void *)p0,value0,value1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0));
  return value2;
 }
}
}
#pragma pop
