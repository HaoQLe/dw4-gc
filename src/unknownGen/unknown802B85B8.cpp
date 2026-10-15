#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beBaseInfo_register();
void beBinDataObject_fieldInit();
void *beStaticInfo_getMeta();
void beStaticInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802B8770();
extern char beStaticInfo_className[];
extern char beBinDataObject_className[];
extern char beStaticInfo_meta[];
extern void *beBinDataObject_meta;
void beStaticInfo_register();
void *beStaticInfo_getMetaCall();
void *beBinDataObject_getMeta();
void beBinDataObject_arkRegister();
void beBinDataObject_register();
void *beBinDataObject_getMetaCall();
}
extern "C" {
void beStaticInfo_arkRegister(){
 meta_registerNow((int)beStaticInfo_register);
}
void beStaticInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beStaticInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beStaticInfo_getMetaCall,(int)beStaticInfo_className,28,(int)beStaticInfo_vtableRead,0,0,0);
}
void *beStaticInfo_getMetaCall(){return beStaticInfo_getMeta();}
void *beBinDataObject_getMeta(){
 if(!beBinDataObject_meta || !(reinterpret_cast<unsigned int *>(beBinDataObject_meta)[0x24/4]&4)) beBinDataObject_arkRegister();
 return beBinDataObject_meta;
}
void beBinDataObject_arkRegister(){
 meta_registerNow((int)beBinDataObject_register);
}
void beBinDataObject_register(){
 fn_802B1AC8();
 meta_registerClass(1,(int)&beBinDataObject_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beBinDataObject_getMetaCall,(int)beBinDataObject_className,24,0,(int)beBinDataObject_fieldInit,0,0);
}
void *beBinDataObject_getMetaCall(){return beBinDataObject_getMeta();}
}
#pragma pop
