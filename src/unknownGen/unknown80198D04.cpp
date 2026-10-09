#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800C37E4(void *,int,void *);
void fn_80198D60(void *,void *);
}
extern "C" {
void igResizeImage_virtual88(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+40)&0x1)){
  if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+68)){
   return;
  }
 }
 value0=fn_800C37E4((void *)p1,0,(void *)p2);
 fn_80198D60((void *)p0,value0);
}
}
#pragma pop
