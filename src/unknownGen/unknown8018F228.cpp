#include <unknownGen.h>
#include <meta/igQuantizeImage.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *);
}
extern "C" {
void igQuantizeImage_virtual30(int p0){
 void *value0;
 value0=reinterpret_cast<Meta::igQuantizeImage *>((void *)p0)->_errorLimit;
 if(value0){
  reinterpret_cast<Meta::igQuantizeImage *>((void *)p0)->_errorLimit=(void *)(reinterpret_cast<char *>(value0)+-1020);
  fn_80056378(reinterpret_cast<Meta::igQuantizeImage *>((void *)p0)->_errorLimit);
  return;
 } else {
  return;
 }
}
}
#pragma pop
