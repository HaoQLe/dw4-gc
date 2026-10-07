#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8029D730(int);
extern char lbl_80566180[1];
}
extern "C" {
void fn_802A8ED4(){}
void *fn_802A8ED8(){
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80566180+0))){
  return (void *)1;
 } else {
  fn_8029D730(0);
  *reinterpret_cast<unsigned char *>((lbl_80566180+0))=1;
  return (void *)1;
 }
}
}
#pragma pop
