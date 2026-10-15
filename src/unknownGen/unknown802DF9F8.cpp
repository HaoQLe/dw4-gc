#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beCriSndf_getMeta();
void beCriSndf_vtableRead();
void *fn_800237D0();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beCriAcxData_registerNow();
void igObject_register();
extern char beCriSndf_className[];
extern char lbl_804D2820[];
extern char lbl_804D282C[];
extern char lbl_804D2838[];
extern char lbl_804D2844[];
extern void *beCriSndf_meta;
extern void *beCriAcxData_meta;
void beCriSndf_register();
void *beCriSndf_getMetaCall();
void beCriSndf_fieldInit();
}
extern "C" {
void beCriSndf_registerNow(){
 meta_registerNow((int)beCriSndf_register);
}
void beCriSndf_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beCriSndf_meta,(int)igObject_register,(int)fn_800237D0,(int)beCriSndf_getMetaCall,(int)beCriSndf_className,32,(int)beCriSndf_vtableRead,(int)beCriSndf_fieldInit,0,0);
}
void *beCriSndf_getMetaCall(){return beCriSndf_getMeta();}
void beCriSndf_fieldInit(){
 void *meta=beCriSndf_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2820,0x3);
 fn_800659C0(meta,lbl_804D282C,lbl_804D2838,lbl_804D2844,field);
}
void *beCriAcxData_getMeta(){
 if(!beCriAcxData_meta || !(reinterpret_cast<unsigned int *>(beCriAcxData_meta)[0x24/4]&4)) beCriAcxData_registerNow();
 return beCriAcxData_meta;
}
}
#pragma pop
