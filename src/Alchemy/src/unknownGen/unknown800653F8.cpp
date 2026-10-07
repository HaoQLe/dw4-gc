#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *_arkCore__Q23Gap4Core;
void *fn_8003E474(void *,void *);
void *fn_80065434(void *);
}
extern "C" {
void *fn_800653F8(int p0){
 void *value0;
 void *value1;
 value0=fn_8003E474(_arkCore__Q23Gap4Core,(void *)p0);
 if(value0){
  value1=fn_80065434(value0);
  return value1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
