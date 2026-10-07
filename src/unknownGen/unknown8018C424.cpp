#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8018C2C8(void *,int);
}
extern "C" {
void fn_8018C424(int p0,int p1){
 void *value0;
 void *value1;
 if((int)p1>0){
  if((int)p1>2){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24))+0)=(void *)1;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24))+4)=(void *)4;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28))+0)=(void *)8;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28))+4)=(void *)8;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52))+0)=(void *)5;
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(void *)5;
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+20)=0;
  } else {
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24))+0)=(void *)2;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24))+4)=(void *)1;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28))+0)=(void *)8;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28))+4)=(void *)1;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52))+0)=(void *)5;
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(void *)0;
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+20)=1;
  }
 }
 fn_8018C2C8((void *)p0,2);
}
}
#pragma pop
