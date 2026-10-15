#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beBaseInfoDataList_getMeta();
void beBaseInfoDataList_vtableRead();
void *fn_80023CF4();
void *fn_80024180();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beActionStarterInfoRam_registerNow();
void igNamedObject_register();
void igObjectList_register();
extern char beBaseInfoDataList_className[];
extern char beBaseInfoData_className[];
extern char lbl_804D2E4C[];
extern char lbl_804D2E54[];
extern char lbl_804D2E58[];
extern char lbl_804D2E5C[];
extern char lbl_804D2E60[];
extern char beBaseInfoDataList_meta[];
extern void *beBaseInfoData_meta;
extern void *beActionStarterInfoRam_meta;
void beBaseInfoDataList_register();
void *beBaseInfoDataList_getMetaCall();
void *beBaseInfoData_getMeta();
void beBaseInfoData_registerNow();
void beBaseInfoData_register();
void *beBaseInfoData_getMetaCall();
void beBaseInfoData_fieldInit();
}
extern "C" {
void beBaseInfoDataList_registerNow(){
 meta_registerNow((int)beBaseInfoDataList_register);
}
void beBaseInfoDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beBaseInfoDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beBaseInfoDataList_getMetaCall,(int)beBaseInfoDataList_className,20,(int)beBaseInfoDataList_vtableRead,0,0,(int)lbl_804D2E4C);
}
void *beBaseInfoDataList_getMetaCall(){return beBaseInfoDataList_getMeta();}
void *beBaseInfoData_getMeta(){
 if(!beBaseInfoData_meta || !(reinterpret_cast<unsigned int *>(beBaseInfoData_meta)[0x24/4]&4)) beBaseInfoData_registerNow();
 return beBaseInfoData_meta;
}
void beBaseInfoData_registerNow(){
 meta_registerNow((int)beBaseInfoData_register);
}
void beBaseInfoData_register(){
 fn_802B1AC8();
 meta_registerClass(1,(int)&beBaseInfoData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beBaseInfoData_getMetaCall,(int)beBaseInfoData_className,16,0,(int)beBaseInfoData_fieldInit,0,0);
}
void *beBaseInfoData_getMetaCall(){return beBaseInfoData_getMeta();}
void beBaseInfoData_fieldInit(){
 void *meta=beBaseInfoData_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804D2E54,0x1);
 meta_setupFields(meta,lbl_804D2E58,lbl_804D2E5C,lbl_804D2E60,field);
}
void *beActionStarterInfoRam_getMeta(){
 if(!beActionStarterInfoRam_meta || !(reinterpret_cast<unsigned int *>(beActionStarterInfoRam_meta)[0x24/4]&4)) beActionStarterInfoRam_registerNow();
 return beActionStarterInfoRam_meta;
}
}
#pragma pop
