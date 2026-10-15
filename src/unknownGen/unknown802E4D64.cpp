#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beActionStarterDataList_registerNow();
extern char lbl_804D2E9C[];
extern char lbl_804D2EA0[];
extern char lbl_804D2EA4[];
extern char lbl_804D2EA8[];
extern void *beActionStarterData2_meta;
extern void *beActionStarterDataList_meta;
extern void *lbl_805621F4;
}
extern "C" {
void beActionStarterData2_fieldInit(){
 void *meta=beActionStarterData2_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804D2E9C,0x1);
 meta_setupFields(meta,lbl_804D2EA0,lbl_804D2EA4,lbl_804D2EA8,field);
}
void *beActionStarterDataList_metaObject(){
 if(!beActionStarterDataList_meta) beActionStarterDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beActionStarterDataList_meta;
}
void *beActionStarterDataList_getMeta(){
 if(!beActionStarterDataList_meta || !(reinterpret_cast<unsigned int *>(beActionStarterDataList_meta)[0x24/4]&4)) beActionStarterDataList_registerNow();
 return beActionStarterDataList_meta;
}
}
#pragma pop
