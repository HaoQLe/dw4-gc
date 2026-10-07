#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800E044C(void *,void *);
}
extern "C" {
void fn_800E03E8(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 fn_800E044C((void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36)+(p2*(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32))),(void *)p1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)=0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 if((unsigned int)(int)value0<=(unsigned int)p2){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(reinterpret_cast<char *>((void *)p2)+1);
 }
}
}
#pragma pop
