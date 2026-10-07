#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80411040();
}
extern "C" {
void fn_80411994(int p0){
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+132)){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+132)=0;
  fn_80411040();
  return;
 } else {
  return;
 }
}
}
#pragma pop
