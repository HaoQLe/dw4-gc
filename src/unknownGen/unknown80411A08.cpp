#include <unknownGen.h>
#include <meta/igRotateMode.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void igRotateMode_virtual6C(int p0,int p1,int p2){
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
 reinterpret_cast<Meta::igRotateMode *>((void *)p0)->_constraintAxis=(int)0;
}
}
#pragma pop
