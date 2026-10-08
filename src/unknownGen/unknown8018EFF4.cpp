#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8018EF94();
}
extern "C" {
void *fn_8018EFF4(int p0,int p1){
 void *value2;
 void *value3;
 void *value4;
 void *value0;
 void *value1;
 fn_8018EF94();
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+12);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+28)=1;
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16);
 value3=value0;
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+20);
 value4=(void *)0;
 while((int)(int)value4<(int)(int)value3){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+3)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+1);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+1)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+0);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+2)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+0);
  value2=(void *)(int)((int)value2+(int)value1);
  value4=(reinterpret_cast<char *>(value4)+1);
 }
 return value0;
}
}
#pragma pop
