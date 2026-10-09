#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beLuaDataObjectist_getMeta();
void beLuaDataObjectist_vtableRead();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D22E8();
void igObjectList_register();
extern char lbl_8041FAD8[];
extern char lbl_804D1860[];
extern char lbl_80535114[];
extern void *lbl_80535118;
extern void *lbl_805621F4;
void beLuaDataObjectist_register();
void *beLuaDataObjectist_getMetaCall();
}
extern "C" {
void fn_802D2144(){
 fn_80066188((int)beLuaDataObjectist_register);
}
void beLuaDataObjectist_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535114,(int)igObjectList_register,(int)fn_80024180,(int)beLuaDataObjectist_getMetaCall,(int)lbl_8041FAD8,20,(int)beLuaDataObjectist_vtableRead,0,0,(int)lbl_804D1860);
}
void *beLuaDataObjectist_getMetaCall(){return beLuaDataObjectist_getMeta();}
void *fn_802D2200(){
 if(!lbl_80535118) lbl_80535118=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535118;
}
void *beLuaDataObject_getMeta(){
 if(!lbl_80535118 || !(reinterpret_cast<unsigned int *>(lbl_80535118)[0x24/4]&4)) fn_802D22E8();
 return lbl_80535118;
}
}
#pragma pop
