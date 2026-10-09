#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_80411A08(int p0,int p1,int p2){
 switch((int)p1){
 case 0:
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+88)=(unsigned char)(int)(void *)p2;
  break;
 case 2:
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+89)=(unsigned char)(int)(void *)p2;
  break;
 case 1:
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+90)=(unsigned char)(int)(void *)p2;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+112)=(void *)0;
}
}
#pragma pop
