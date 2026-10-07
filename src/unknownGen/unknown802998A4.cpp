#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_802998A4(int p0){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+88);
 }
 return (void *)0;
}
void *fn_802998C0(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+88)=(void *)p1;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+88)>(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+88)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
 }
 return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+88);
}
}
#pragma pop
