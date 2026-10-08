#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *);
void fn_800DD024(void *);
}
extern "C" {
void fn_800DCFAC(int p0,int p1,int p2){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
 if(value0){
  if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)){
   fn_80056378(value0);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=(void *)p1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=0;
 fn_800DD024((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=(void *)p2;
}
}
#pragma pop
