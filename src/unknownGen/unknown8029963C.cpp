#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_8029963C(int p0,int p1){
 if((int)p1>=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=(void *)p1;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
}
}
#pragma pop
