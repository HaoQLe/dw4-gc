#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023880();
void *fn_80023C40();
void *fn_800240CC();
void *fn_80031250();
void fn_800374E8();
extern char lbl_80561488[1];
extern char lbl_80561489[1];
}
extern "C" {
void fn_80021B94(){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 if((int)*reinterpret_cast<signed char *>((lbl_80561489+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80561488+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80561489+0))=1;
 }
 if(!(void *)(int)*reinterpret_cast<unsigned char *>((lbl_80561488+0))){
  *reinterpret_cast<unsigned char *>((lbl_80561488+0))=1;
  value0=fn_80023880();
  value1=fn_800240CC();
  value2=fn_80023C40();
  value3=fn_80031250();
  fn_800374E8();
  return;
 } else {
  return;
 }
}
}
#pragma pop
