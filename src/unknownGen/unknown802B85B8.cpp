#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beBaseInfo_register();
void beBinDataObject_fieldInit();
void *beStaticInfo_getMeta();
void beStaticInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802B8770();
extern char lbl_8041D620[];
extern char lbl_8041D630[];
extern char lbl_80534730[];
extern void *lbl_80534734;
void beStaticInfo_register();
void *beStaticInfo_getMetaCall();
void *beBinDataObject_getMeta();
void fn_802B86B8();
void beBinDataObject_register();
void *beBinDataObject_getMetaCall();
}
extern "C" {
void fn_802B85B8(){
 fn_80066188((int)beStaticInfo_register);
}
void beStaticInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534730,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beStaticInfo_getMetaCall,(int)lbl_8041D620,28,(int)beStaticInfo_vtableRead,0,0,0);
}
void *beStaticInfo_getMetaCall(){return beStaticInfo_getMeta();}
void *beBinDataObject_getMeta(){
 if(!lbl_80534734 || !(reinterpret_cast<unsigned int *>(lbl_80534734)[0x24/4]&4)) fn_802B86B8();
 return lbl_80534734;
}
void fn_802B86B8(){
 fn_80066188((int)beBinDataObject_register);
}
void beBinDataObject_register(){
 fn_802B1AC8();
 fn_80066204(1,(int)&lbl_80534734,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beBinDataObject_getMetaCall,(int)lbl_8041D630,24,0,(int)beBinDataObject_fieldInit,0,0);
}
void *beBinDataObject_getMetaCall(){return beBinDataObject_getMeta();}
}
#pragma pop
