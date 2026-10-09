#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWItemRevisionBase_register();
void *beNDMWItemYellowArmor_getMeta();
void beNDMWItemYellowArmor_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80342F9C();
extern char lbl_80455178[];
extern char lbl_80536748[];
void beNDMWItemYellowArmor_register();
void *beNDMWItemYellowArmor_getMetaCall();
}
extern "C" {
void fn_80342EE8(){
 fn_80066188((int)beNDMWItemYellowArmor_register);
}
void beNDMWItemYellowArmor_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536748,(int)beNDMWItemRevisionBase_register,(int)fn_80342F9C,(int)beNDMWItemYellowArmor_getMetaCall,(int)lbl_80455178,24,(int)beNDMWItemYellowArmor_vtableRead,0,0,0);
}
void *beNDMWItemYellowArmor_getMetaCall(){return beNDMWItemYellowArmor_getMeta();}
}
#pragma pop
