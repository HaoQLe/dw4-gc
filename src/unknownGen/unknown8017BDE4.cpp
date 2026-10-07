#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *vprintf(void *,void *);
}
extern "C" {
void *fn_8017BDE4(int p0,int p1,int p2){
 void *value0;
 void *value1;
 value0=(void *)-1;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+32)){
  value1=vprintf((void *)p1,(void *)p2);
  value0=value1;
 }
 return value0;
}
}
#pragma pop
