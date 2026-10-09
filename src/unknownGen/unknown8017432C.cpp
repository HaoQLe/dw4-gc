#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void *fn_80182484(void *,void *);
extern void *lbl_80564A14;
}
extern "C" {
void *igHideActorSkinGraphs_virtual74(int p0,int p1){
 void *value0;
 void *value1;
 value0=fn_80068128((void *)p1,lbl_80564A14);
 if((unsigned char)(int)value0){
  value1=fn_80182484((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+20));
  return value1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
