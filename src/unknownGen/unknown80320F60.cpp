#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80535C18[];
}
extern "C" {
void fn_80320F60(int p0,int p1){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16);
 if((int)(int)value0==-1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)0;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+16)=1;
 } else {
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=value0;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+16)=0;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(void *)0;
 *reinterpret_cast<void * *>((lbl_80535C18+0))=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+64);
}
}
#pragma pop
