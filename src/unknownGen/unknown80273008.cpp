#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80272D20(void *,void *);
void *fn_80281934(void *);
}
extern "C" {
void *fn_80273008(int p0,int p1){
 void *value0;
 void *value1;
 value0=fn_80272D20((void *)p0,(void *)p1);
 if(!value0){
  return (void *)-2;
 } else {
  value1=fn_80281934(value0);
  return value1;
 }
}
}
#pragma pop
