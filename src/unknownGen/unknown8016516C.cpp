#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void memset(void *,int,void *,void *);
}
extern "C" {
void fn_8016516C(int p0,int p1,int p2,int p3,int p4,int p5){
 if(((int)p0!=0&&(int)p1>0)){
  memset((void *)p0,32,(void *)p1,(void *)p3);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+p1)=(unsigned char)0;
  return;
 } else {
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+0)=0;
  return;
 }
}
}
#pragma pop
