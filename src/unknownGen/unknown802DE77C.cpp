#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beCriVolume_getMeta();
void beCriVolume_vtableRead();
void *fn_800237D0();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802DE9C0();
void igObject_register();
extern char lbl_804207A4[];
extern char lbl_804D25C8[];
extern char lbl_804D25E0[];
extern char lbl_804D25F8[];
extern char lbl_804D2610[];
extern void *lbl_805354C8;
extern void *lbl_805354E4;
void beCriVolume_register();
void *beCriVolume_getMetaCall();
void beCriVolume_fieldInit();
}
extern "C" {
void fn_802DE77C(){
 fn_80066188((int)beCriVolume_register);
}
void beCriVolume_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_805354C8,(int)igObject_register,(int)fn_800237D0,(int)beCriVolume_getMetaCall,(int)lbl_804207A4,32,(int)beCriVolume_vtableRead,(int)beCriVolume_fieldInit,0,0);
}
void *beCriVolume_getMetaCall(){return beCriVolume_getMeta();}
void beCriVolume_fieldInit(){
 void *meta=lbl_805354C8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D25C8,0x6);
 fn_800659C0(meta,lbl_804D25E0,lbl_804D25F8,lbl_804D2610,field);
}
void *beCriSfpData_getMeta(){
 if(!lbl_805354E4 || !(reinterpret_cast<unsigned int *>(lbl_805354E4)[0x24/4]&4)) fn_802DE9C0();
 return lbl_805354E4;
}
}
#pragma pop
