#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igGamecubeImageConvert_virtual64(int p0,int p1,int p2,int p3){
 void *value6;
 void *value7;
 void *value8;
 void *value9;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p3)+0)==100){
  value6=(void *)p1;
  value7=(void *)0;
  while((int)(int)value7<(int)p2){
   value0=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+0);
   value1=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+1);
   value2=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+2);
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+0)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+3);
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+1)=(unsigned char)(int)value0;
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+2)=(unsigned char)(int)value1;
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+3)=(unsigned char)(int)value2;
   value6=(reinterpret_cast<char *>(value6)+4);
   value7=(reinterpret_cast<char *>(value7)+1);
  }
  return value0;
 }
 value8=(void *)p1;
 value9=(void *)0;
 while((int)(int)value9<(int)p2){
  value3=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+0);
  value4=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+2);
  value5=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+3);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+0)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+1);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+1)=(unsigned char)(int)value4;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+2)=(unsigned char)(int)value5;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+3)=(unsigned char)(int)value3;
  value8=(reinterpret_cast<char *>(value8)+4);
  value9=(reinterpret_cast<char *>(value9)+1);
 }
 return value3;
}
}
#pragma pop
