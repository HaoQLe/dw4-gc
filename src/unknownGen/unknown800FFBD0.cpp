#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_800FFBD0(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value9;
 void *value10;
 void *value11;
 value8=(void *)p2;
 value9=(void *)p3;
 value10=(void *)p4;
 value11=(void *)p5;
 if((int)p1==0){
  value0=(void *)p2;
  if((int)p2==3){
   value0=(void *)13;
  }
  value1=value0;
  if((int)(int)value0==7){
   value1=(void *)14;
  }
  value2=(void *)p3;
  if((int)p3==3){
   value2=(void *)13;
  }
  value3=value2;
  if((int)(int)value2==7){
   value3=(void *)14;
  }
  value4=(void *)p4;
  if((int)p4==3){
   value4=(void *)13;
  }
  value5=value4;
  if((int)(int)value4==7){
   value5=(void *)14;
  }
  value6=(void *)p5;
  if((int)p5==3){
   value6=(void *)13;
  }
  value7=value6;
  if((int)(int)value6==7){
   value7=(void *)14;
  }
  value8=value1;
  value9=value3;
  value10=value5;
  value11=value7;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+704)=(unsigned char)(int)value8;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+720)=(unsigned char)(int)value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+736)=(unsigned char)(int)value10;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+752)=(unsigned char)(int)value11;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x40);
}
void fn_800FFC5C(int p0,int p1,int p2,int p3,int p4,int p5){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+704);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+0)=(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+720);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p4)+0)=(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+736);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p5)+0)=(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+752);
}
void *fn_800FFC94(int p0,int p1,int p2,int p3,int p4,int p5){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+768)=(unsigned char)(int)(void *)p4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+784)=(unsigned char)(int)(void *)p2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+816)=(unsigned char)(int)(void *)p3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+800)=(unsigned char)(int)(void *)p5;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x40);
 return (void *)p0;
}
}
#pragma pop
