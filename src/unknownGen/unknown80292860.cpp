#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80417E68[];
extern char lbl_80417E70[];
void *memcmp(void *,void *,int);
}
extern "C" {
void *fn_80292860(int p0){
 void *value0;
 void *value1;
 value0=memcmp((void *)p0,lbl_80417E68,4);
 if(((int)(int)value0==0&&(value1=memcmp((reinterpret_cast<char *>((void *)p0)+8),lbl_80417E70,4),(int)(int)value1==0))){
  return (void *)1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
