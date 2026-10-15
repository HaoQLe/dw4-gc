#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beCriVolume_getMeta();
void beCriVolume_vtableRead();
void *fn_800237D0();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beCriSfpData_registerNow();
void igObject_register();
extern char beCriVolume_className[];
extern char lbl_804D25C8[];
extern char lbl_804D25E0[];
extern char lbl_804D25F8[];
extern char lbl_804D2610[];
extern void *beCriVolume_meta;
extern void *beCriSfpData_meta;
void beCriVolume_register();
void *beCriVolume_getMetaCall();
void beCriVolume_fieldInit();
}
extern "C" {
void beCriVolume_registerNow(){
 meta_registerNow((int)beCriVolume_register);
}
void beCriVolume_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beCriVolume_meta,(int)igObject_register,(int)fn_800237D0,(int)beCriVolume_getMetaCall,(int)beCriVolume_className,32,(int)beCriVolume_vtableRead,(int)beCriVolume_fieldInit,0,0);
}
void *beCriVolume_getMetaCall(){return beCriVolume_getMeta();}
void beCriVolume_fieldInit(){
 void *meta=beCriVolume_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804D25C8,0x6);
 meta_setupFields(meta,lbl_804D25E0,lbl_804D25F8,lbl_804D2610,field);
}
void *beCriSfpData_getMeta(){
 if(!beCriSfpData_meta || !(reinterpret_cast<unsigned int *>(beCriSfpData_meta)[0x24/4]&4)) beCriSfpData_registerNow();
 return beCriSfpData_meta;
}
}
#pragma pop
