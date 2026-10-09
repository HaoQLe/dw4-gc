#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802A4E98();
void *fn_802A4F28();
}
extern "C" {
void fn_80299A30(int p0){
 void *value2;
 void *value0;
 void *value3;
 void *value4;
 void *value1;
 value2=fn_802A4F28();
 if(((int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1)==2&&(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+2)==1)){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)=1;
  value0=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+71);
  if((int)(int)value0==1){
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+71)=0;
  }
 } else {
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1)=1;
 }
 value3=fn_802A4E98();
 value4=fn_802A4F28();
 value1=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+73);
 if((int)(int)value1==1){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+70)=1;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+69)=0;
 fn_802A4E98();
}
}
#pragma pop
