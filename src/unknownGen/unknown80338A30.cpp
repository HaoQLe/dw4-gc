#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beNDMWMdlPlayer_arkRegister();
extern char lbl_80454368[];
extern char beNDMWMdlPlayer2InfoWork_fieldTypes[];
extern char beNDMWMdlPlayer2InfoWork_fieldNames[];
extern char beNDMWMdlPlayer2InfoWork_fieldStorage[];
extern char beNDMWMdlPlayer2InfoWork_fieldOffsets[];
extern char lbl_804E2738[];
extern char lbl_804E2754[];
extern void *beNDMWMdlPlayer2InfoWork_meta;
extern void *lbl_80536174;
extern void *beNDMWMdlPlayer_meta;
extern void *lbl_805621F4;
}
extern "C" {
void beNDMWMdlPlayer2InfoWork_fieldInit(){
 void *meta=beNDMWMdlPlayer2InfoWork_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWMdlPlayer2InfoWork_fieldTypes,0x4);
 meta_setupFields(meta,beNDMWMdlPlayer2InfoWork_fieldNames,beNDMWMdlPlayer2InfoWork_fieldStorage,beNDMWMdlPlayer2InfoWork_fieldOffsets,field);
}
void *fn_80338AB0(){
 if(!lbl_80536174) lbl_80536174=fn_800635C8(lbl_80454368,lbl_804E2738,lbl_804E2754,0x7);
 return lbl_80536174;
}
void *beNDMWMdlPlayer_create(void *object){
 beNDMWMdlPlayer_arkRegister();
 return meta_createInstance(beNDMWMdlPlayer_meta,object);
}
void *beNDMWMdlPlayer_metaObject(){
 if(!beNDMWMdlPlayer_meta) beNDMWMdlPlayer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMdlPlayer_meta;
}
void *beNDMWMdlPlayer_getMeta(){
 if(!beNDMWMdlPlayer_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlPlayer_meta)[0x24/4]&4)) beNDMWMdlPlayer_arkRegister();
 return beNDMWMdlPlayer_meta;
}
}
#pragma pop
