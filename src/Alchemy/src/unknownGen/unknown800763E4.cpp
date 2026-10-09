#include <unknownGen.h>
#include <meta/igGamecubeFile.h>
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
  if(reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_fBuf){
   fn_80068390((void *)p0,reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_fBuf);
   reinterpret_cast<Meta::igGamecubeFile *>((void *)p0)->_fBuf=(void *)0;
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
