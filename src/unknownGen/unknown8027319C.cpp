#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80272D20(void *,void *);
void *fn_80282818(void *,void *);
}
extern "C" {
void *fn_8027319C(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 value1=fn_80272D20((void *)p0,(void *)p1);
 value0=(void *)0;
 if(((int)(int)value1==0||((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+0)!=3&&(value2=fn_80282818((void *)p0,value1),(int)(int)value2!=0)))){
  value0=(void *)1;
 }
 if((unsigned char)(int)value0){
  return (void *)0;
 } else {
  return *reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8))+8);
 }
}
}
#pragma pop
