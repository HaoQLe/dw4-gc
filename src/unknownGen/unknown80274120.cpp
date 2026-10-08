#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80273120(void *,void *);
void *fn_8027319C(void *,void *);
void fn_80273F98(void *,void *,int);
}
extern "C" {
void *fn_80274120(int p0,int p1,int p2){
 void *value0;
 void *value1;
 value0=fn_80273120((void *)p0,(void *)p1);
 if((int)(int)value0==0){
  fn_80273F98((void *)p0,(void *)p1,3);
 }
 if((unsigned int)p2!=0){
  value1=fn_8027319C((void *)p0,(void *)p1);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=value1;
 }
 return value0;
}
}
#pragma pop
