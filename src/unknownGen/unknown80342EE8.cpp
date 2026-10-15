#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWItemRevisionBase_register();
void *beNDMWItemYellowArmor_getMeta();
void beNDMWItemYellowArmor_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80342F9C();
extern char beNDMWItemYellowArmor_className[];
extern char beNDMWItemYellowArmor_meta[];
void beNDMWItemYellowArmor_register();
void *beNDMWItemYellowArmor_getMetaCall();
}
extern "C" {
void beNDMWItemYellowArmor_registerNow(){
 meta_registerNow((int)beNDMWItemYellowArmor_register);
}
void beNDMWItemYellowArmor_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWItemYellowArmor_meta,(int)beNDMWItemRevisionBase_register,(int)fn_80342F9C,(int)beNDMWItemYellowArmor_getMetaCall,(int)beNDMWItemYellowArmor_className,24,(int)beNDMWItemYellowArmor_vtableRead,0,0,0);
}
void *beNDMWItemYellowArmor_getMetaCall(){return beNDMWItemYellowArmor_getMeta();}
}
#pragma pop
