#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A17C4(void *,...);
extern char lbl_8041A618[];
}
extern "C" {
void *fn_802A19D8(int p0){
 if((unsigned int)p0==0){
  fn_802A17C4(lbl_8041A618);
  return (void *)-1;
 } else {
  return *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
 }
}
void *fn_802A1A18(int p0){
 if((unsigned int)p0==0){
  fn_802A17C4(lbl_8041A618);
  return (void *)-1;
 } else {
  return (void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+1);
 }
}
}
#pragma pop
