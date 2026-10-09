#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beFontGeomAttrPairList_getMeta();
void beFontGeomAttrPairList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802DA324();
void igObjectList_register();
extern char lbl_804203D0[];
extern char lbl_804D2184[];
extern char lbl_80535384[];
extern void *lbl_80535388;
void beFontGeomAttrPairList_register();
void *beFontGeomAttrPairList_getMetaCall();
}
extern "C" {
void fn_802DA10C(){
 fn_80066188((int)beFontGeomAttrPairList_register);
}
void beFontGeomAttrPairList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535384,(int)igObjectList_register,(int)fn_80024180,(int)beFontGeomAttrPairList_getMetaCall,(int)lbl_804203D0,20,(int)beFontGeomAttrPairList_vtableRead,0,0,(int)lbl_804D2184);
}
void *beFontGeomAttrPairList_getMetaCall(){return beFontGeomAttrPairList_getMeta();}
void *beFontGeomAttrPair_getMeta(){
 if(!lbl_80535388 || !(reinterpret_cast<unsigned int *>(lbl_80535388)[0x24/4]&4)) fn_802DA324();
 return lbl_80535388;
}
}
#pragma pop
