#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_803225AC(int p0){
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)){
  return (void *)1;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+28)=1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)2;
 return (void *)1;
}
}
#pragma pop
