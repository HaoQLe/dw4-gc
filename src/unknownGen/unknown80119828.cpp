#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_804F8AE0[];
}
extern "C" {
void *fn_80119828(int p0){
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)){
  return (reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20))+16);
 }
 return lbl_804F8AE0;
}
}
#pragma pop
