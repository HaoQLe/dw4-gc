#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_800E0570(int p0,int p1){
 if((unsigned int)p1>=(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)){
  return (void *)0;
 }
 return (void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36)+(p1*(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32)));
}
void *fn_800E0598(int p0){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)=0;
 return (void *)p0;
}
}
#pragma pop
