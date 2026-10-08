#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_800F4614(int p0,int p1,int p2){
 void *value1;
 void *value2;
 void *value3;
 void *value0;
 value1=(void *)p0;
 value2=(void *)p1;
 value3=(void *)0;
 while((int)(int)value3<(int)p2){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+0);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value1)+0)=(unsigned char)(int)(void *)(int)(((unsigned int)(int)value0>>16)&0xFF);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value1)+1)=(unsigned char)(int)(void *)(int)(((unsigned int)(int)value0>>8)&0xFF);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value1)+2)=(unsigned char)(int)value0;
  value2=(reinterpret_cast<char *>(value2)+4);
  value1=(reinterpret_cast<char *>(value1)+3);
  value3=(reinterpret_cast<char *>(value3)+1);
 }
}
}
#pragma pop
