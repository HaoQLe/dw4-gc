#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beFontGeomAttrPair_fieldInit();
void *beFontGeomAttrPair_getMeta();
void beFontGeomAttrPair_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beFontGeomAttrPair_className[];
extern char beFontGeomAttrPair_dependencies[];
extern char beFontGeomAttrPair_meta[];
void beFontGeomAttrPair_register();
void *beFontGeomAttrPair_getMetaCall();
}
extern "C" {
void beFontGeomAttrPair_arkRegister(){
 meta_registerNow((int)beFontGeomAttrPair_register);
}
void beFontGeomAttrPair_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beFontGeomAttrPair_meta,(int)igObject_register,(int)fn_800237D0,(int)beFontGeomAttrPair_getMetaCall,(int)beFontGeomAttrPair_className,20,(int)beFontGeomAttrPair_vtableRead,(int)beFontGeomAttrPair_fieldInit,0,(int)beFontGeomAttrPair_dependencies);
}
void *beFontGeomAttrPair_getMetaCall(){return beFontGeomAttrPair_getMeta();}
}
#pragma pop
