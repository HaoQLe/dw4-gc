#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_8010061C(int p0,int p1){
 if(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28)&0x400000)){
  return (void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8))+4)+(((p1*3)+1)*12));
 }
 return (void *)0;
}
}
#pragma pop
