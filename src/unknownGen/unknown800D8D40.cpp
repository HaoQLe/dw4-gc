#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800D8CD0(void *);
}
extern "C" {
void *fn_800D8D40(int p0){
 void *value0;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+29)){
  value0=fn_800D8CD0((void *)p0);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+29)=0;
  return value0;
 } else {
  return (void *)1;
 }
}
}
#pragma pop
