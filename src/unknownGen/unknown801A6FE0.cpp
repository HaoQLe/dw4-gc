#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void *fn_801829C4(void *,void *);
extern void *lbl_80564A14;
}
extern "C" {
void *igCreateBoundingBoxes_virtual6C(int p0,int p1){
 void *value0;
 void *value1;
 value0=fn_80068128((void *)p1,lbl_80564A14);
 if((unsigned char)(int)value0){
  value1=fn_801829C4((void *)p1,(void *)p0);
  return value1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
