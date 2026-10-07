#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_800C2004(int p0,int p1){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>=0){
  return;
 }
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)<0){
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)p1;
}
}
#pragma pop
