#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80078260(void *);
}
extern "C" {
void fn_80078910(int p0){
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+53)){
  fn_80078260((void *)p0);
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+54)=1;
}
void *fn_80078950(void *p0){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+54)=0;
 return p0;
}
}
#pragma pop
