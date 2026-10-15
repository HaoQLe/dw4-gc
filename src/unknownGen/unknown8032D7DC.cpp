#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrlEditBit_getMeta();
void beNDMWShopCtrlEditBit_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWShopCtrlDigilabo_arkRegister();
extern char beNDMWShopCtrlEditBit_className[];
extern char beNDMWShopCtrlEditBit_fieldTypes[];
extern char beNDMWShopCtrlEditBit_fieldNames[];
extern char beNDMWShopCtrlEditBit_fieldStorage[];
extern char beNDMWShopCtrlEditBit_fieldOffsets[];
extern void *beNDMWShopCtrlEditBit_meta;
extern void *beNDMWShopCtrlDigilabo_meta;
void beNDMWShopCtrlEditBit_register();
void *beNDMWShopCtrlEditBit_getMetaCall();
void beNDMWShopCtrlEditBit_fieldInit();
}
extern "C" {
void *beNDMWShopCtrlDigilabo_create(void *object){
 beNDMWShopCtrlDigilabo_arkRegister();
 return meta_createInstance(beNDMWShopCtrlDigilabo_meta,object);
}
void *beNDMWShopCtrlDigilabo_getMeta(){
 if(!beNDMWShopCtrlDigilabo_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrlDigilabo_meta)[0x24/4]&4)) beNDMWShopCtrlDigilabo_arkRegister();
 return beNDMWShopCtrlDigilabo_meta;
}
}
#pragma pop
