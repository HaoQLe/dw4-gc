#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8031FCF0(void *);
void fn_8031FF98(void *);
}
extern "C" {
void *fn_80321488(int p0){
 void *value0;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)){
  return (void *)1;
 } else {
  value0=fn_8031FCF0((void *)p0);
  switch((int)(int)value0){
  case 1:
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)2;
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=1;
   break;
  case -1:
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)5;
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=1;
   break;
  case -2:
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)7;
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=1;
   break;
  case -3:
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)12;
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=1;
   break;
  case -4:
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)11;
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=1;
  }
  if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)==1){
   fn_8031FF98((void *)p0);
  }
  return (void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28);
 }
}
}
#pragma pop
