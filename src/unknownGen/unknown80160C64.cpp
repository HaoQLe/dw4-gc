#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80160C64(int p0,int p1){
 if(((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)&0x4)){
  return (void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+16)+(p1<<4));
 }
 return (void *)0;
}
void *fn_80160C8C(int p0,int p1){
 if(((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)&0x2)){
  return (void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+16)+(p1<<4));
 }
 return (void *)0;
}
}
#pragma pop
