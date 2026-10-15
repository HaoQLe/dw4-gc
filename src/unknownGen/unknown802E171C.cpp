#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801BFC74();
void *fn_801C5E38();
void *igInsightCore_metaObject();
void beCameraCtrlInfo_registerNow();
extern char lbl_804D2990[];
extern char lbl_804D29B0[];
extern char lbl_804D29D0[];
extern char lbl_804D29F0[];
extern void *beCameraMode_meta;
extern void *beCameraCtrlInfo_meta;
}
extern "C" {
void beCameraMode_fieldInit(){
 void *value0=beCameraMode_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D2990,8);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801BFC74();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801C5E38();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=igInsightCore_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+60)=0;
 meta_setupFields(value0,lbl_804D29B0,lbl_804D29D0,lbl_804D29F0,value1);
}
void *beCameraCtrlInfo_getMeta(){
 if(!beCameraCtrlInfo_meta || !(reinterpret_cast<unsigned int *>(beCameraCtrlInfo_meta)[0x24/4]&4)) beCameraCtrlInfo_registerNow();
 return beCameraCtrlInfo_meta;
}
}
#pragma pop
