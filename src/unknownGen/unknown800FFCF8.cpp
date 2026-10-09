#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void igGamecubeVisualContext_virtual468(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 value4=(void *)p2;
 value5=(void *)p3;
 value6=(void *)p4;
 value7=(void *)p5;
 if((int)p1==0){
  value0=(void *)p2;
  if((int)p2==3){
   value0=(void *)5;
  }
  value1=(void *)p3;
  if((int)p3==3){
   value1=(void *)5;
  }
  value2=(void *)p4;
  if((int)p4==3){
   value2=(void *)5;
  }
  value3=(void *)p5;
  if((int)p5==3){
   value3=(void *)5;
  }
  value4=value0;
  value5=value1;
  value6=value2;
  value7=value3;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+864)=(unsigned char)(int)value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+880)=(unsigned char)(int)value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+896)=(unsigned char)(int)value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+912)=(unsigned char)(int)value7;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x40);
}
void igGamecubeVisualContext_virtual46C(int p0,int p1,int p2,int p3,int p4,int p5){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+864);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+0)=(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+880);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p4)+0)=(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+896);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p5)+0)=(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+912);
}
void *igGamecubeVisualContext_virtual470(int p0,int p1,int p2,int p3,int p4,int p5){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+928)=(unsigned char)(int)(void *)p4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+944)=(unsigned char)(int)(void *)p2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+976)=(unsigned char)(int)(void *)p3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)(int)(p0+p1))+960)=(unsigned char)(int)(void *)p5;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x40);
 return (void *)p0;
}
}
#pragma pop
