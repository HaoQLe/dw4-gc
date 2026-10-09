#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8026B908(void *,void *);
void fn_8026CE04(void *);
void fn_80272D8C(void *,int);
void fn_80272DD0(void *,int);
void fn_80272E28(void *,int);
void *fn_80273008(void *,int);
void *fn_8027327C(void *,int);
void fn_802734C8(void *,void *,int);
}
extern "C" {
void fn_8026DA70(int p0){
 void *value0;
 void *value1;
 value0=fn_8027327C((void *)p0,-1);
 value1=fn_80273008((void *)p0,1);
 if(((int)(int)value1==(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+28))+40)||(int)(int)value1==(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+28))+44))){
  fn_80272DD0((void *)p0,3);
 } else {
  fn_80272D8C((void *)p0,-3);
  fn_80272E28((void *)p0,1);
  fn_802734C8((void *)p0,value0,0);
 }
 if((int)(((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value0)+43)>>2)&0x1)==0){
  fn_8026CE04((void *)p0);
  return;
 } else {
  if((int)(((unsigned int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>(value0)+42)>>4)&0xFFF)!=0){
   fn_8026B908(value0,(void *)p0);
   return;
  } else {
   reinterpret_cast<void (*)(void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+32))((void *)p0);
   return;
  }
 }
}
}
#pragma pop
