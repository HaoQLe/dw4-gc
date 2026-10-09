#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A4E98();
void *fn_802A4F28();
}
extern "C" {
void fn_80299728(int p0){
 void *value1;
 void *value0;
 value1=fn_802A4F28();
 if(((int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1)==2&&(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+2)==1)){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)=1;
  value0=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+71);
  if((int)(int)value0==1){
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+71)=0;
  }
 } else {
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1)=1;
 }
 fn_802A4E98();
}
}
#pragma pop
