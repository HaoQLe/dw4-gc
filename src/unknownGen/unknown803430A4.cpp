#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWItemBlueArmor_getMeta();
void beNDMWItemBlueArmor_vtableRead();
void beNDMWItemRevisionPocketBase_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80343158();
extern char lbl_80455190[];
extern char lbl_8053674C[];
void beNDMWItemBlueArmor_register();
void *beNDMWItemBlueArmor_getMetaCall();
}
extern "C" {
void fn_803430A4(){
 fn_80066188((int)beNDMWItemBlueArmor_register);
}
void beNDMWItemBlueArmor_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053674C,(int)beNDMWItemRevisionPocketBase_register,(int)fn_80343158,(int)beNDMWItemBlueArmor_getMetaCall,(int)lbl_80455190,28,(int)beNDMWItemBlueArmor_vtableRead,0,0,0);
}
void *beNDMWItemBlueArmor_getMetaCall(){return beNDMWItemBlueArmor_getMeta();}
}
#pragma pop
