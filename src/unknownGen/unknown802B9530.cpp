#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *bePlaySE_getMeta();
void bePlaySE_vtableRead();
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beShadow01InfoList_registerNow();
void igObject_register();
extern char bePlaySE_className[];
extern char lbl_804CF63C[];
extern char lbl_804CF644[];
extern char lbl_804CF64C[];
extern char lbl_804CF654[];
extern void *bePlaySE_meta;
extern void *beShadow01InfoList_meta;
extern void *lbl_805621F4;
void bePlaySE_register();
void *bePlaySE_getMetaCall();
void bePlaySE_fieldInit();
}
extern "C" {
void bePlaySE_registerNow(){
 meta_registerNow((int)bePlaySE_register);
}
void bePlaySE_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&bePlaySE_meta,(int)igObject_register,(int)fn_800237D0,(int)bePlaySE_getMetaCall,(int)bePlaySE_className,24,(int)bePlaySE_vtableRead,(int)bePlaySE_fieldInit,0,0);
}
void *bePlaySE_getMetaCall(){return bePlaySE_getMeta();}
void bePlaySE_fieldInit(){
 void *meta=bePlaySE_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804CF63C,0x2);
 meta_setupFields(meta,lbl_804CF644,lbl_804CF64C,lbl_804CF654,field);
}
void *beShadow01InfoList_metaObject(){
 if(!beShadow01InfoList_meta) beShadow01InfoList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beShadow01InfoList_meta;
}
void *beShadow01InfoList_getMeta(){
 if(!beShadow01InfoList_meta || !(reinterpret_cast<unsigned int *>(beShadow01InfoList_meta)[0x24/4]&4)) beShadow01InfoList_registerNow();
 return beShadow01InfoList_meta;
}
}
#pragma pop
