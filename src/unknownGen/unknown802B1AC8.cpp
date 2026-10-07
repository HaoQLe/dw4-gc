#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_805661B8[1];
extern char lbl_805661B9[7];
}
extern "C" {
void fn_802B1AC8(){
 if((int)*reinterpret_cast<signed char *>((lbl_805661B9+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_805661B8+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_805661B9+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_805661B8+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_805661B8+0))=1;
}
}
#pragma pop
