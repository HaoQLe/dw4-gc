#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *_arkCore__Q23Gap4Core;
void fn_80066DFC(void *);
void free(void *);
}
extern "C" {
void fn_80060748(int p0){
 void *value0=_arkCore__Q23Gap4Core;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value0)+0)){
  fn_80066DFC((void *)p0);
  return;
 } else {
  free((void *)p0);
  return;
 }
}
}
#pragma pop
