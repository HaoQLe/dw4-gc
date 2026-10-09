#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80417E78[];
extern char lbl_80417E80[];
void *memcmp(void *,void *,int);
}
extern "C" {
void *fn_802937A0(int p0){
 void *value0;
 void *value1;
 value0=memcmp((void *)p0,lbl_80417E78,4);
 if(((int)(int)value0==0||(value1=memcmp((void *)p0,lbl_80417E80,4),(int)(int)value1==0))){
  return (void *)1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
