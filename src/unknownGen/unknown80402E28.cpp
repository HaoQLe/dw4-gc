#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80566208[1];
extern char lbl_80566209[7];
}
extern "C" {
void fn_80402E28(){
 if((int)*reinterpret_cast<signed char *>((lbl_80566209+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80566208+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80566209+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80566208+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_80566208+0))=1;
}
}
#pragma pop
