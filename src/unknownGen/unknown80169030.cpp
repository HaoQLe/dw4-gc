#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041660(void *,void *,int);
}
extern "C" {
void igTransformSequence1_5_virtual98(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56);
 if((int)p1>=0){
  if((int)p1<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12)){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+8)=(void *)p1;
  } else {
   fn_80041660(value0,(void *)p1,8);
  }
 }
 if((((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)&0x1)&&(value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(int)p1>=0))){
  if((int)p1<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+12)){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+8)=(void *)p1;
  } else {
   fn_80041660(value1,(void *)p1,12);
  }
 }
 if(((((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)&0x2)||((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)&0x4))&&(value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(int)p1>=0))){
  if((int)p1<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+12)){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+8)=(void *)p1;
  } else {
   fn_80041660(value2,(void *)p1,16);
  }
 }
 if((((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)&0x8)&&(value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(int)p1>=0))){
  if((int)p1<=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value3)+12)){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+8)=(void *)p1;
   return;
  } else {
   fn_80041660(value3,(void *)p1,12);
   return;
  }
 }
}
}
#pragma pop
