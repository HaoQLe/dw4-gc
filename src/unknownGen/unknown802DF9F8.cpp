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
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802DFC3C();
void igObject_register();
extern char lbl_80420970[];
extern char lbl_804D2820[];
extern char lbl_804D282C[];
extern char lbl_804D2838[];
extern char lbl_804D2844[];
extern void *lbl_80535570;
extern void *lbl_80535580;
void beCriSndf_register();
void *beCriSndf_getMetaCall();
void beCriSndf_fieldInit();
}
extern "C" {
void fn_802DF9F8(){
 fn_80066188((int)beCriSndf_register);
}
void beCriSndf_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80535570,(int)igObject_register,(int)fn_800237D0,(int)beCriSndf_getMetaCall,(int)lbl_80420970,32,(int)beCriSndf_vtableRead,(int)beCriSndf_fieldInit,0,0);
}
void *beCriSndf_getMetaCall(){return beCriSndf_getMeta();}
void beCriSndf_fieldInit(){
 void *meta=lbl_80535570;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2820,0x3);
 fn_800659C0(meta,lbl_804D282C,lbl_804D2838,lbl_804D2844,field);
}
void *beCriAcxData_getMeta(){
 if(!lbl_80535580 || !(reinterpret_cast<unsigned int *>(lbl_80535580)[0x24/4]&4)) fn_802DFC3C();
 return lbl_80535580;
}
}
#pragma pop
