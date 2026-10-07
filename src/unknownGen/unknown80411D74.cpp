#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_80411D74(int p0,int p1,int p2,float f0,float f1){
 if(!(unsigned short)p2){
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+100)=f0;
  *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+104)=f1;
  return;
 }
 if((unsigned int)(unsigned short)p2!=1){
  return;
 }
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+92)=f0;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+96)=f1;
}
}
#pragma pop
