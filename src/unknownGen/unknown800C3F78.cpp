#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_800C3F78(int p0,int p1,int p2){
 if((int)p1==0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)p2;
 } else {
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)p2;
 }
 if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+32)){
  return;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+32)=1;
}
}
#pragma pop
