#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80105A60(void *);
void *fn_80105AC8(void *);
}
extern "C" {
void *fn_80105AE4(int p0){
 void *value2;
 void *value3;
 void *value0;
 void *value1;
 value2=fn_80105AC8((void *)p0);
 if(((unsigned char)(int)value2&&(value3=fn_80105A60((void *)p0),!(unsigned char)(int)value3))){
  return (void *)255;
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(reinterpret_cast<char *>(value0)+1);
  return (void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value1)+(int)value0);
 }
}
}
#pragma pop
