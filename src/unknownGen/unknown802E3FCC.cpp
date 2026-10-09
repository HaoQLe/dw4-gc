#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beBaseInfoDataList_getMeta();
void beBaseInfoDataList_vtableRead();
void *fn_80023CF4();
void *fn_80024180();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802E42F4();
void igNamedObject_register();
void igObjectList_register();
extern char lbl_80420DD4[];
extern char lbl_80420DE8[];
extern char lbl_804D2E4C[];
extern char lbl_804D2E54[];
extern char lbl_804D2E58[];
extern char lbl_804D2E5C[];
extern char lbl_804D2E60[];
extern char lbl_80535718[];
extern void *lbl_8053571C;
extern void *lbl_80535724;
void beBaseInfoDataList_register();
void *beBaseInfoDataList_getMetaCall();
void *beBaseInfoData_getMeta();
void fn_802E40D4();
void beBaseInfoData_register();
void *beBaseInfoData_getMetaCall();
void beBaseInfoData_fieldInit();
}
extern "C" {
void fn_802E3FCC(){
 fn_80066188((int)beBaseInfoDataList_register);
}
void beBaseInfoDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535718,(int)igObjectList_register,(int)fn_80024180,(int)beBaseInfoDataList_getMetaCall,(int)lbl_80420DD4,20,(int)beBaseInfoDataList_vtableRead,0,0,(int)lbl_804D2E4C);
}
void *beBaseInfoDataList_getMetaCall(){return beBaseInfoDataList_getMeta();}
void *beBaseInfoData_getMeta(){
 if(!lbl_8053571C || !(reinterpret_cast<unsigned int *>(lbl_8053571C)[0x24/4]&4)) fn_802E40D4();
 return lbl_8053571C;
}
void fn_802E40D4(){
 fn_80066188((int)beBaseInfoData_register);
}
void beBaseInfoData_register(){
 fn_802B1AC8();
 fn_80066204(1,(int)&lbl_8053571C,(int)igNamedObject_register,(int)fn_80023CF4,(int)beBaseInfoData_getMetaCall,(int)lbl_80420DE8,16,0,(int)beBaseInfoData_fieldInit,0,0);
}
void *beBaseInfoData_getMetaCall(){return beBaseInfoData_getMeta();}
void beBaseInfoData_fieldInit(){
 void *meta=lbl_8053571C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2E54,0x1);
 fn_800659C0(meta,lbl_804D2E58,lbl_804D2E5C,lbl_804D2E60,field);
}
void *beActionStarterInfoRam_getMeta(){
 if(!lbl_80535724 || !(reinterpret_cast<unsigned int *>(lbl_80535724)[0x24/4]&4)) fn_802E42F4();
 return lbl_80535724;
}
}
#pragma pop
