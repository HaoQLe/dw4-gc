#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beLuaDataObject_fieldInit();
void *beLuaDataObject_getMeta();
void beLuaDataObject_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beLuaDataObject_className[];
extern char beLuaDataObject_meta[];
void beLuaDataObject_register();
void *beLuaDataObject_getMetaCall();
}
extern "C" {
void beLuaDataObject_registerNow(){
 meta_registerNow((int)beLuaDataObject_register);
}
void beLuaDataObject_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLuaDataObject_meta,(int)igObject_register,(int)fn_800237D0,(int)beLuaDataObject_getMetaCall,(int)beLuaDataObject_className,16,(int)beLuaDataObject_vtableRead,(int)beLuaDataObject_fieldInit,0,0);
}
void *beLuaDataObject_getMetaCall(){return beLuaDataObject_getMeta();}
}
#pragma pop
