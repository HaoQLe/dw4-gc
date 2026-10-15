#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShinkaObject_getMeta();
void beNDMWShinkaObject_vtableRead();
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beNDMWGameRam_registerNow();
void igObject_register();
extern char lbl_80453438[];
extern char beNDMWShinkaObject_className[];
extern char lbl_80455484[];
extern char lbl_804E3E08[];
extern char lbl_804E3E54[];
extern char lbl_804E3EA0[];
extern char lbl_804E3EEC[];
extern char lbl_804E3F38[];
extern char lbl_804E3F90[];
extern char lbl_804E3FE8[];
extern char lbl_804E4040[];
extern void *beNDMWShinkaObject_meta;
extern void *lbl_805367E8;
extern void *lbl_805367EC;
extern void *beNDMWGameRam_meta;
extern void *lbl_805621F4;
void beNDMWShinkaObject_register();
void *beNDMWShinkaObject_getMetaCall();
void beNDMWShinkaObject_fieldInit();
}
extern "C" {
void beNDMWShinkaObject_registerNow(){
 meta_registerNow((int)beNDMWShinkaObject_register);
}
void beNDMWShinkaObject_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWShinkaObject_meta,(int)igObject_register,(int)fn_800237D0,(int)beNDMWShinkaObject_getMetaCall,(int)beNDMWShinkaObject_className,84,(int)beNDMWShinkaObject_vtableRead,(int)beNDMWShinkaObject_fieldInit,0,0);
}
void *beNDMWShinkaObject_getMetaCall(){return beNDMWShinkaObject_getMeta();}
void beNDMWShinkaObject_fieldInit(){
 void *meta=beNDMWShinkaObject_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804E3E08,0x13);
 meta_setupFields(meta,lbl_804E3E54,lbl_804E3EA0,lbl_804E3EEC,field);
}
void *fn_803441B4(){
 if(!lbl_805367E8) lbl_805367E8=fn_800635C8(lbl_80455484,lbl_804E3F38,lbl_804E3F90,0x16);
 return lbl_805367E8;
}
void *fn_80344214(){
 if(!lbl_805367EC) lbl_805367EC=fn_800635C8(lbl_80453438,lbl_804E3FE8,lbl_804E4040,0x16);
 return lbl_805367EC;
}
void *beNDMWGameRam_create(void *object){
 beNDMWGameRam_registerNow();
 return meta_createInstance(beNDMWGameRam_meta,object);
}
void *beNDMWGameRam_metaObject(){
 if(!beNDMWGameRam_meta) beNDMWGameRam_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWGameRam_meta;
}
void *beNDMWGameRam_getMeta(){
 if(!beNDMWGameRam_meta || !(reinterpret_cast<unsigned int *>(beNDMWGameRam_meta)[0x24/4]&4)) beNDMWGameRam_registerNow();
 return beNDMWGameRam_meta;
}
}
#pragma pop
