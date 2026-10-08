#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800A31CC(void *);
void *fn_80272D74(void *);
float fn_802730B4(void *,int);
void *fn_8027327C(void *,int);
void fn_802734C8(void *,void *,void *);
}
extern "C" {
void *fn_8026EF80(int p0){
 void *value0;
 void *value1;
 float value2;
 void *value3;
 void *value4;
 value1=fn_80272D74((void *)p0);
 if((int)(int)value1!=0){
  value2=fn_802730B4((void *)p0,-2);
  value0=(void *)(int)value2;
 } else {
  value0=(void *)1;
 }
 value3=fn_800A31CC(value0);
 value4=fn_8027327C((void *)p0,-1);
 fn_802734C8((void *)p0,value3,*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+40));
 return (void *)1;
}
}
#pragma pop
