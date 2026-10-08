#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8011DD0C();
void *fn_8011DE60();
void fn_8012859C();
extern char lbl_805638C4[1];
extern char lbl_805638C5[1];
}
extern "C" {
void fn_8011D8BC(){
 void *value0;
 void *value1;
 if((int)*reinterpret_cast<signed char *>((lbl_805638C5+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_805638C4+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_805638C5+0))=1;
 }
 if(!(void *)(int)*reinterpret_cast<unsigned char *>((lbl_805638C4+0))){
  *reinterpret_cast<unsigned char *>((lbl_805638C4+0))=1;
  value0=fn_8011DD0C();
  value1=fn_8011DE60();
  fn_8012859C();
  return;
 } else {
  return;
 }
}
}
#pragma pop
