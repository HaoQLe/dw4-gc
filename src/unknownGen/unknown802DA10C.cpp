#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beFontGeomAttrPairList_getMeta();
void beFontGeomAttrPairList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beFontGeomAttrPair_arkRegister();
void igObjectList_register();
extern char beFontGeomAttrPairList_className[];
extern char beFontGeomAttrPairList_dependencies[];
extern char beFontGeomAttrPairList_meta[];
extern void *beFontGeomAttrPair_meta;
void beFontGeomAttrPairList_register();
void *beFontGeomAttrPairList_getMetaCall();
}
extern "C" {
void beFontGeomAttrPairList_arkRegister(){
 meta_registerNow((int)beFontGeomAttrPairList_register);
}
void beFontGeomAttrPairList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beFontGeomAttrPairList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beFontGeomAttrPairList_getMetaCall,(int)beFontGeomAttrPairList_className,20,(int)beFontGeomAttrPairList_vtableRead,0,0,(int)beFontGeomAttrPairList_dependencies);
}
void *beFontGeomAttrPairList_getMetaCall(){return beFontGeomAttrPairList_getMeta();}
void *beFontGeomAttrPair_getMeta(){
 if(!beFontGeomAttrPair_meta || !(reinterpret_cast<unsigned int *>(beFontGeomAttrPair_meta)[0x24/4]&4)) beFontGeomAttrPair_arkRegister();
 return beFontGeomAttrPair_meta;
}
}
#pragma pop
