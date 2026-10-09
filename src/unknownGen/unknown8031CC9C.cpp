#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802A8904(void *,void *,void *);
}
extern "C" {
void *fn_8031CC9C(int p0,int p1,int p2){
 void *value0;
 void *value1;
 value0=(void *)0;
 if((*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)&&(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)==2)){
  value0=(void *)1;
 }
 if((int)((unsigned int)((-(unsigned char)(int)value0)|(unsigned char)(int)value0)>>31)!=0){
  value1=fn_802A8904(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)p1,(void *)p2);
  return value1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop
