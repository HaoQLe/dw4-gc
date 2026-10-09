#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveApi_register();
void *beSvGetFreeSizeApi_getMeta();
void beSvGetFreeSizeApi_vtableRead();
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void fn_802BE2C8();
extern char lbl_8041DF80[];
extern char lbl_804CFBC4[];
extern char lbl_804CFBD0[];
extern char lbl_804CFBDC[];
extern char lbl_804CFBE8[];
extern void *lbl_80534920;
extern void *lbl_80534930;
void beSvGetFreeSizeApi_register();
void *beSvGetFreeSizeApi_getMetaCall();
void beSvGetFreeSizeApi_fieldInit();
}
extern "C" {
void fn_802BDF7C(){
 fn_80066188((int)beSvGetFreeSizeApi_register);
}
void beSvGetFreeSizeApi_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534920,(int)beSaveApi_register,(int)fn_802BD764,(int)beSvGetFreeSizeApi_getMetaCall,(int)lbl_8041DF80,224,(int)beSvGetFreeSizeApi_vtableRead,(int)beSvGetFreeSizeApi_fieldInit,0,0);
}
void *beSvGetFreeSizeApi_getMetaCall(){return beSvGetFreeSizeApi_getMeta();}
void beSvGetFreeSizeApi_fieldInit(){
 void *meta=lbl_80534920;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CFBC4,0x3);
 fn_800659C0(meta,lbl_804CFBD0,lbl_804CFBDC,lbl_804CFBE8,field);
}
void *fn_802BE0B8(void *object){
 fn_802BE2C8();
 return fn_8006546C(lbl_80534930,object);
}
void *beSvWriteMediaApi_getMeta(){
 if(!lbl_80534930 || !(reinterpret_cast<unsigned int *>(lbl_80534930)[0x24/4]&4)) fn_802BE2C8();
 return lbl_80534930;
}
}
#pragma pop
