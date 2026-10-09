#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8027EF90(void *,int,void *);
}
extern "C" {
void *fn_8027F03C(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 value0=(void *)p0;
 value1=(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64))+((((unsigned int)p1>>3)&((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56)+-1))<<2));
 while(value1){
  if(((unsigned int)p1==(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&&((int)p2==(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+0)||(int)p2==-1))){
   return value1;
  }
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+12);
 }
 value2=fn_8027EF90(value0,0,(void *)p1);
 if((int)p2!=-1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+0)=(void *)p2;
 }
 return value2;
}
}
#pragma pop
