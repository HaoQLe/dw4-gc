#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void igRotateMode_virtual64(int p0,int p1,int p2){
 if((*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+117)&&((int)p1==200||(int)p1==201))){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+116)=(unsigned char)(int)(void *)p2;
 }
 if((int)p1!=202){
  if((int)p1!=203){
   return;
  }
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+108)=(unsigned char)(int)(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+112)=(void *)0;
}
}
#pragma pop
