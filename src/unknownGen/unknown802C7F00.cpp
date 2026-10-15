#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlInfoAI_getMeta();
void beModelCtrlInfoAI_vtableRead();
void *fn_800237D0();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlInfoHitBody_registerNow();
void igObject_register();
extern char beModelCtrlInfoAI_className[];
extern char lbl_804D0B84[];
extern char lbl_804D0B98[];
extern char lbl_804D0BAC[];
extern char lbl_804D0BC0[];
extern void *beModelCtrlInfoAI_meta;
extern void *beModelCtrlInfoHitBody_meta;
extern void *lbl_805621F4;
void beModelCtrlInfoAI_register();
void *beModelCtrlInfoAI_getMetaCall();
void beModelCtrlInfoAI_fieldInit();
}
extern "C" {
void beModelCtrlInfoAI_registerNow(){
 meta_registerNow((int)beModelCtrlInfoAI_register);
}
void beModelCtrlInfoAI_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beModelCtrlInfoAI_meta,(int)igObject_register,(int)fn_800237D0,(int)beModelCtrlInfoAI_getMetaCall,(int)beModelCtrlInfoAI_className,36,(int)beModelCtrlInfoAI_vtableRead,(int)beModelCtrlInfoAI_fieldInit,0,0);
}
void *beModelCtrlInfoAI_getMetaCall(){return beModelCtrlInfoAI_getMeta();}
void beModelCtrlInfoAI_fieldInit(){
 void *meta=beModelCtrlInfoAI_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804D0B84,0x5);
 meta_setupFields(meta,lbl_804D0B98,lbl_804D0BAC,lbl_804D0BC0,field);
}
void *beModelCtrlInfoHitBody_create(void *object){
 beModelCtrlInfoHitBody_registerNow();
 return meta_createInstance(beModelCtrlInfoHitBody_meta,object);
}
void *beModelCtrlInfoHitBody_metaObject(){
 if(!beModelCtrlInfoHitBody_meta) beModelCtrlInfoHitBody_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beModelCtrlInfoHitBody_meta;
}
void *beModelCtrlInfoHitBody_getMeta(){
 if(!beModelCtrlInfoHitBody_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlInfoHitBody_meta)[0x24/4]&4)) beModelCtrlInfoHitBody_registerNow();
 return beModelCtrlInfoHitBody_meta;
}
}
#pragma pop
