#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
unsigned char fn_800F9084(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1172);}
void fn_800F908C(int p0,int p1,int p2,int p3,int p4){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1176)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1180)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1184)=(void *)p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1188)=(void *)p4;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+104)!=1){
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x10);
}
}
#pragma pop
