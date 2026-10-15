#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWItemBlueArmor_getMeta();
void beNDMWItemBlueArmor_vtableRead();
void beNDMWItemRevisionPocketBase_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80343158();
extern char beNDMWItemBlueArmor_className[];
extern char beNDMWItemBlueArmor_meta[];
void beNDMWItemBlueArmor_register();
void *beNDMWItemBlueArmor_getMetaCall();
}
extern "C" {
void beNDMWItemBlueArmor_registerNow(){
 meta_registerNow((int)beNDMWItemBlueArmor_register);
}
void beNDMWItemBlueArmor_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWItemBlueArmor_meta,(int)beNDMWItemRevisionPocketBase_register,(int)fn_80343158,(int)beNDMWItemBlueArmor_getMetaCall,(int)beNDMWItemBlueArmor_className,28,(int)beNDMWItemBlueArmor_vtableRead,0,0,0);
}
void *beNDMWItemBlueArmor_getMetaCall(){return beNDMWItemBlueArmor_getMeta();}
}
#pragma pop
