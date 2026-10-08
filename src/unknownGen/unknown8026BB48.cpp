#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8026CDCC(int);
void fn_8026CE04(int);
void fn_802734A8(void *,void *,int);
void fn_802734C8(void *,void *,int);
void fn_802739F0(void *,int);
}
extern "C" {
void fn_8026BB48(int p0,int p1){
 fn_802734C8((void *)p0,(void *)p1,0);
 if((int)(((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+43)>>2)&0x1)==0){
  fn_802734A8((void *)p0,(void *)fn_8026CE04,1);
 } else {
  if((int)(((unsigned int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p1)+42)>>4)&0xFFF)==0){
   fn_802734A8((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32),1);
  } else {
   fn_802734A8((void *)p0,(void *)fn_8026CDCC,1);
  }
 }
 fn_802739F0((void *)p0,-3);
}
}
#pragma pop
