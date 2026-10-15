#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beBaseInfoList_getMeta();
void beBaseInfoList_vtableRead();
void *fn_80024180();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *beBaseInfoRamList_metaObject();
void beBaseInfoDataList_registerNow();
void igInfo_register();
void igObjectList_register();
extern char beBaseInfoList_className[];
extern char beBaseInfo_className[];
extern char lbl_804D2E18[];
extern char lbl_804D2E20[];
extern char lbl_804D2E2C[];
extern char lbl_804D2E34[];
extern char lbl_804D2E3C[];
extern char lbl_804D2E44[];
extern char beBaseInfoList_meta[];
extern void *beBaseInfo_meta;
extern void *beBaseInfoDataList_meta;
extern void *lbl_805621F4;
void beBaseInfoList_register();
void *beBaseInfoList_getMetaCall();
void *beBaseInfo_getMeta();
void beBaseInfo_registerNow();
void beBaseInfo_register();
void *beBaseInfo_getMetaCall();
void beBaseInfo_fieldInit();
void *beBaseInfoDataList_metaObject();
}
extern "C" {
void beBaseInfoList_registerNow(){
 meta_registerNow((int)beBaseInfoList_register);
}
void beBaseInfoList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beBaseInfoList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beBaseInfoList_getMetaCall,(int)beBaseInfoList_className,20,(int)beBaseInfoList_vtableRead,0,0,(int)lbl_804D2E18);
}
void *beBaseInfoList_getMetaCall(){return beBaseInfoList_getMeta();}
void *beBaseInfo_metaObject(){
 if(!beBaseInfo_meta) beBaseInfo_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beBaseInfo_meta;
}
void *beBaseInfo_getMeta(){
 if(!beBaseInfo_meta || !(reinterpret_cast<unsigned int *>(beBaseInfo_meta)[0x24/4]&4)) beBaseInfo_registerNow();
 return beBaseInfo_meta;
}
void beBaseInfo_registerNow(){
 meta_registerNow((int)beBaseInfo_register);
}
void beBaseInfo_register(){
 fn_802B1AC8();
 meta_registerClass(1,(int)&beBaseInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)beBaseInfo_getMetaCall,(int)beBaseInfo_className,28,0,(int)beBaseInfo_fieldInit,0,(int)lbl_804D2E20);
}
void *beBaseInfo_getMetaCall(){return beBaseInfo_getMeta();}
void beBaseInfo_fieldInit(){
 void *value0=beBaseInfo_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2E2C,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=beBaseInfoDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beBaseInfoRamList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_804D2E34,lbl_804D2E3C,lbl_804D2E44,value1);
}
void *beBaseInfoDataList_create(void *object){
 beBaseInfoDataList_registerNow();
 return meta_createInstance(beBaseInfoDataList_meta,object);
}
void *beBaseInfoDataList_metaObject(){
 if(!beBaseInfoDataList_meta) beBaseInfoDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beBaseInfoDataList_meta;
}
void *beBaseInfoDataList_getMeta(){
 if(!beBaseInfoDataList_meta || !(reinterpret_cast<unsigned int *>(beBaseInfoDataList_meta)[0x24/4]&4)) beBaseInfoDataList_registerNow();
 return beBaseInfoDataList_meta;
}
}
#pragma pop
