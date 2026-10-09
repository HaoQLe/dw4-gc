#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igGamecubeImageConvert_virtual74(int p0,int p1,int p2){
 void *value2;
 void *value3;
 void *value0;
 void *value1;
 value2=(void *)p1;
 value3=(void *)0;
 while((int)(int)value3<(int)p2){
  value0=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+1);
  value1=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+0);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+1)=(unsigned char)(int)(void *)(int)((((int)value0<<8)&0xFFFFFF00)|((int)value1&0xFF));
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+0)=(unsigned char)(int)(void *)(int)(((unsigned int)((((int)value0<<8)&0xFFFFFF00)|((int)value1&0xFF))>>8)&0xFF);
  value2=(reinterpret_cast<char *>(value2)+2);
  value3=(reinterpret_cast<char *>(value3)+1);
 }
 return value1;
}
}
#pragma pop
