#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041660(void *,void *,int);
}
extern "C" {
void fn_800C19E0(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 if((int)p1!=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+40)=1;
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
  if((int)p1>=0){
   if((int)p1<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12)){
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+8)=(void *)p1;
   } else {
    fn_80041660(value0,(void *)p1,4);
   }
  }
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
  if((int)p1>=0){
   if((int)p1<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+12)){
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+8)=(void *)p1;
   } else {
    fn_80041660(value1,(void *)p1,4);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)p1;
  return;
 } else {
  return;
 }
}
}
#pragma pop
