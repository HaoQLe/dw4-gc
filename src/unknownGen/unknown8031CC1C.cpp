#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802A8A30(void *,void *);
void fn_802A8AD4(void *);
}
extern "C" {
void *fn_8031CC1C(int p0,int p1){
 void *value0;
 void *value1;
 value0=(void *)0;
 if((*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)&&(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)==1)){
  value0=(void *)1;
 }
 if((int)((unsigned int)((-(unsigned char)(int)value0)|(unsigned char)(int)value0)>>31)!=0){
  fn_802A8AD4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
  value1=fn_802A8A30(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)p1);
  return value1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
