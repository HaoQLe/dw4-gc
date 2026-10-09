#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80043B50(void *);
extern void *kSuccess__3Gap;
}
extern "C" {
void igIGBFile_virtual80(int p0,int p1){
 if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+56)){
  fn_80043B50((void *)p1);
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
}
#pragma pop
