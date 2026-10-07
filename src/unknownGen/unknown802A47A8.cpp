#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_805303D8[];
}
extern "C" {
void *fn_802A47A8(int p0){
 void *value0;
 if((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_805303D8)+(p0<<3))){
  value0=reinterpret_cast<void * (*)(void *)>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_805303D8)+(p0<<3)))(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)((int)lbl_805303D8+(p0<<3)))+4));
  return value0;
 } else {
  return lbl_805303D8;
 }
}
}
#pragma pop
