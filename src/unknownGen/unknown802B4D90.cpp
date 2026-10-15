#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beWaterPlainInfo_getMeta();
void beWaterPlainInfo_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void beWaterPlain_arkRegister();
extern char beWaterPlainInfo_className[];
extern char lbl_8041CD10[];
extern char lbl_804CF0BC[];
extern char lbl_804CF0C0[];
extern char beWaterPlainInfo_meta[];
extern void *lbl_8053461C;
extern void *beWaterPlain_meta;
extern void *lbl_805621F4;
void beWaterPlainInfo_register();
void *beWaterPlainInfo_getMetaCall();
}
extern "C" {
void beWaterPlainInfo_arkRegister(){
 meta_registerNow((int)beWaterPlainInfo_register);
}
void beWaterPlainInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beWaterPlainInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beWaterPlainInfo_getMetaCall,(int)beWaterPlainInfo_className,28,(int)beWaterPlainInfo_vtableRead,0,0,0);
}
void *beWaterPlainInfo_getMetaCall(){return beWaterPlainInfo_getMeta();}
void *fn_802B4E44(){
 if(!lbl_8053461C) lbl_8053461C=fn_800635C8(lbl_8041CD10,lbl_804CF0BC,lbl_804CF0C0,0x1);
 return lbl_8053461C;
}
void *beWaterPlain_create(void *object){
 beWaterPlain_arkRegister();
 return meta_createInstance(beWaterPlain_meta,object);
}
void *beWaterPlain_metaObject(){
 if(!beWaterPlain_meta) beWaterPlain_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beWaterPlain_meta;
}
void *beWaterPlain_getMeta(){
 if(!beWaterPlain_meta || !(reinterpret_cast<unsigned int *>(beWaterPlain_meta)[0x24/4]&4)) beWaterPlain_arkRegister();
 return beWaterPlain_meta;
}
}
#pragma pop
