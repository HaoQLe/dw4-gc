#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beLuaDataObjectist_getMeta();
void beLuaDataObjectist_vtableRead();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beLuaDataObject_arkRegister();
void igObjectList_register();
extern char beLuaDataObjectist_className[];
extern char beLuaDataObjectist_dependencies[];
extern char beLuaDataObjectist_meta[];
extern void *beLuaDataObject_meta;
extern void *lbl_805621F4;
void beLuaDataObjectist_register();
void *beLuaDataObjectist_getMetaCall();
}
extern "C" {
void beLuaDataObjectist_arkRegister(){
 meta_registerNow((int)beLuaDataObjectist_register);
}
void beLuaDataObjectist_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLuaDataObjectist_meta,(int)igObjectList_register,(int)fn_80024180,(int)beLuaDataObjectist_getMetaCall,(int)beLuaDataObjectist_className,20,(int)beLuaDataObjectist_vtableRead,0,0,(int)beLuaDataObjectist_dependencies);
}
void *beLuaDataObjectist_getMetaCall(){return beLuaDataObjectist_getMeta();}
void *beLuaDataObject_metaObject(){
 if(!beLuaDataObject_meta) beLuaDataObject_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beLuaDataObject_meta;
}
void *beLuaDataObject_getMeta(){
 if(!beLuaDataObject_meta || !(reinterpret_cast<unsigned int *>(beLuaDataObject_meta)[0x24/4]&4)) beLuaDataObject_arkRegister();
 return beLuaDataObject_meta;
}
}
#pragma pop
