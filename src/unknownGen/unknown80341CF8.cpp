#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWLoadCtrl2CtrlData_arkRegister();
extern void *beNDMWLoadCtrl2CtrlData_meta;
}
extern "C" {
void *beNDMWLoadCtrl2CtrlData_create(void *object){
 beNDMWLoadCtrl2CtrlData_arkRegister();
 return meta_createInstance(beNDMWLoadCtrl2CtrlData_meta,object);
}
void *beNDMWLoadCtrl2CtrlData_getMeta(){
 if(!beNDMWLoadCtrl2CtrlData_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadCtrl2CtrlData_meta)[0x24/4]&4)) beNDMWLoadCtrl2CtrlData_arkRegister();
 return beNDMWLoadCtrl2CtrlData_meta;
}
}
#pragma pop
