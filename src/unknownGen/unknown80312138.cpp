#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_80534AAC;
}
extern "C" {
void *fn_80312138(int p0,int p1){
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+29)){
  return *reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20))+16))+16);
 }
 if((int)p1<4){
  return (void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20))+16))+(p1<<2));
 }
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20))+16))+16);
}
void *bePadManager_virtual58(){return lbl_80534AAC;}
}
#pragma pop
