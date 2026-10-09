#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWLoadSavePlWork_fieldInit();
void *beNDMWLoadSavePlWork_getMeta();
void beNDMWLoadSavePlWork_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igObject_register();
extern char lbl_80454D5C[];
extern char lbl_804E37E4[];
extern char lbl_805365AC[];
void beNDMWLoadSavePlWork_register();
void *beNDMWLoadSavePlWork_getMetaCall();
}
extern "C" {
void fn_8033F7CC(){
 fn_80066188((int)beNDMWLoadSavePlWork_register);
}
void beNDMWLoadSavePlWork_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805365AC,(int)igObject_register,(int)fn_800237D0,(int)beNDMWLoadSavePlWork_getMetaCall,(int)lbl_80454D5C,52,(int)beNDMWLoadSavePlWork_vtableRead,(int)beNDMWLoadSavePlWork_fieldInit,0,(int)lbl_804E37E4);
}
void *beNDMWLoadSavePlWork_getMetaCall(){return beNDMWLoadSavePlWork_getMeta();}
}
#pragma pop
