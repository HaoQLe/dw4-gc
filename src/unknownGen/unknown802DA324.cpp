#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beFontGeomAttrPair_fieldInit();
void *beFontGeomAttrPair_getMeta();
void beFontGeomAttrPair_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_804203E8[];
extern char lbl_804D218C[];
extern char lbl_80535388[];
void beFontGeomAttrPair_register();
void *beFontGeomAttrPair_getMetaCall();
}
extern "C" {
void fn_802DA324(){
 fn_80066188((int)beFontGeomAttrPair_register);
}
void beFontGeomAttrPair_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535388,(int)igObject_register,(int)fn_800237D0,(int)beFontGeomAttrPair_getMetaCall,(int)lbl_804203E8,20,(int)beFontGeomAttrPair_vtableRead,(int)beFontGeomAttrPair_fieldInit,0,(int)lbl_804D218C);
}
void *beFontGeomAttrPair_getMetaCall(){return beFontGeomAttrPair_getMeta();}
}
#pragma pop
