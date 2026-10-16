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
void beNDMWGameRam_arkRegister();
void igObject_register();
extern char lbl_80453438[];
extern char beNDMWShinkaObject_className[];
extern char lbl_80455484[];
extern char beNDMWShinkaObject_fieldTypes[];
extern char beNDMWShinkaObject_fieldNames[];
extern char beNDMWShinkaObject_fieldStorage[];
extern char beNDMWShinkaObject_fieldOffsets[];
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
void *fn_803441B4(){
 if(!lbl_805367E8) lbl_805367E8=fn_800635C8(lbl_80455484,lbl_804E3F38,lbl_804E3F90,0x16);
 return lbl_805367E8;
}
void *fn_80344214(){
 if(!lbl_805367EC) lbl_805367EC=fn_800635C8(lbl_80453438,lbl_804E3FE8,lbl_804E4040,0x16);
 return lbl_805367EC;
}
}
#pragma pop
