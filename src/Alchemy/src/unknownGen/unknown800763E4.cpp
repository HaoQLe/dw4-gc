#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void DVDClose(void *);
void fn_80068390(void *,void *);
}
extern "C" {
void igGamecubeFile_virtual60(int p0){
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+104)){
  DVDClose((reinterpret_cast<char *>((void *)p0)+44));
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+104)=0;
  if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+120)){
   fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+120));
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+120)=(void *)0;
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
