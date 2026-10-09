#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80041810(void *,void *,int);
}
extern "C" {
void igTransformSequence1_5_virtual90(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 fn_80041810(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56),(void *)p1,8);
 if(((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)&0x1)){
  fn_80041810(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)p1,12);
 }
 value0=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72);
 if((((unsigned int)(int)value0&0x2)||((unsigned int)(int)value0&0x4))){
  fn_80041810(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),(void *)p1,16);
 }
 if(((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)&0x8)){
  fn_80041810(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(void *)p1,12);
  return;
 } else {
  return;
 }
}
}
#pragma pop
