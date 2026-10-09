#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void igObjectDirEntry_virtual64(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 if((unsigned int)p1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4)&0x7FFFFF)){
   fn_80066E1C((void *)p1);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
