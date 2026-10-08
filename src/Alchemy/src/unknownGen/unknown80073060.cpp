#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *);
void fn_80073668(void *);
}
extern "C" {
void *fn_80073060(void *p0,int p1){
 if((int)(int)p0!=0){
  fn_80056378(*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+16));
  if((int)(short)p1>0){
   fn_80073668(p0);
  }
 }
 return p0;
}
}
#pragma pop
