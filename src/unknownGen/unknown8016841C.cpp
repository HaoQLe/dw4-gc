#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
extern void *lbl_80564BC0;
}
extern "C" {
void *fn_8016841C(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 if(((int)p1!=0&&(value1=fn_80068128((void *)p1,lbl_80564BC0),(unsigned char)(int)value1))){
  value0=(void *)p1;
 } else {
  value0=(void *)0;
 }
 if(!value0){
  return (void *)0;
 } else {
  return (void *)(int)(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+20)>>6)&0x1);
 }
}
}
#pragma pop
