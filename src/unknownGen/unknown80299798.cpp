#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802959C4();
void *fn_802959E4();
}
extern "C" {
void *fn_80299798(int p0,int p1){
 fn_802959E4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=(void *)0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+3)=0;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)==0){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1)=3;
 } else {
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1)=2;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+2)=0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=(void *)0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+71)=1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+92)=(void *)p1;
 fn_802959C4();
 return (void *)1;
}
}
#pragma pop
