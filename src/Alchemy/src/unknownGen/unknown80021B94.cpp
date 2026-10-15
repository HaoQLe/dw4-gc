#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igThreadManager_arkRegister();
void *igThread_arkRegister();
void *igThreadList_arkRegister();
void *igErrorHandler_arkRegister();
void igContextExt_arkRegister();
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
  value0=igThreadManager_arkRegister();
  value1=igThreadList_arkRegister();
  value2=igThread_arkRegister();
  value3=igErrorHandler_arkRegister();
  igContextExt_arkRegister();
  return;
 } else {
  return;
 }
}
}
#pragma pop
