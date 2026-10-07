#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80566088[1];
extern char lbl_80566089[7];
}
extern "C" {
void fn_80284294(){
 if((int)*reinterpret_cast<signed char *>((lbl_80566089+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80566088+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80566089+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80566088+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_80566088+0))=1;
}
}
#pragma pop
