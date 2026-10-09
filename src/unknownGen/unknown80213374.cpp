#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80214958(void *);
void fn_80214980(void *);
}
extern "C" {
void fn_80213374(int p0){
 if((*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)&&(unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+116)!=255)){
  fn_80214958((void *)p0);
  fn_80214980((void *)p0);
  return;
 } else {
  fn_80214958((void *)p0);
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=0;
  return;
 }
}
}
#pragma pop
