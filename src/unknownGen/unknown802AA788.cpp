#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80566190[1];
extern char lbl_80566191[7];
}
extern "C" {
void fn_802AA788(){
 if((int)*reinterpret_cast<signed char *>((lbl_80566191+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80566190+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80566191+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80566190+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_80566190+0))=1;
}
}
#pragma pop
