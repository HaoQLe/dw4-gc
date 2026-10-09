#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igGamecubeImageConvert_virtual7C(int p0,int p1,int p2){
 void *value1;
 void *value2;
 void *value0;
 value1=(void *)p1;
 value2=(void *)0;
 while((int)(int)value2<(int)p2){
  value0=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value1)+0);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value1)+0)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value1)+1);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value1)+1)=(unsigned char)(int)value0;
  value1=(reinterpret_cast<char *>(value1)+2);
  value2=(reinterpret_cast<char *>(value2)+1);
 }
 return value0;
}
}
#pragma pop
