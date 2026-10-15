#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlSCHitBox_getMeta();
void beModelCtrlSCHitBox_vtableRead();
void beModelCtrlSubComBase_register();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C570C();
void beModelCtrlSCEffect_registerNow();
extern char beModelCtrlSCHitBox_className[];
extern char lbl_804D05E8[];
extern char lbl_804D0600[];
extern char lbl_804D0618[];
extern char lbl_804D0630[];
extern void *beModelCtrlSCHitBox_meta;
extern void *beModelCtrlSCEffect_meta;
void beModelCtrlSCHitBox_register();
void *beModelCtrlSCHitBox_getMetaCall();
void beModelCtrlSCHitBox_fieldInit();
}
extern "C" {
void beModelCtrlSCHitBox_registerNow(){
 meta_registerNow((int)beModelCtrlSCHitBox_register);
}
void beModelCtrlSCHitBox_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beModelCtrlSCHitBox_meta,(int)beModelCtrlSubComBase_register,(int)fn_802C570C,(int)beModelCtrlSCHitBox_getMetaCall,(int)beModelCtrlSCHitBox_className,60,(int)beModelCtrlSCHitBox_vtableRead,(int)beModelCtrlSCHitBox_fieldInit,0,0);
}
void *beModelCtrlSCHitBox_getMetaCall(){return beModelCtrlSCHitBox_getMeta();}
void beModelCtrlSCHitBox_fieldInit(){
 void *meta=beModelCtrlSCHitBox_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804D05E8,0x6);
 meta_setupFields(meta,lbl_804D0600,lbl_804D0618,lbl_804D0630,field);
}
void *beModelCtrlSCEffect_create(void *object){
 beModelCtrlSCEffect_registerNow();
 return meta_createInstance(beModelCtrlSCEffect_meta,object);
}
void *beModelCtrlSCEffect_getMeta(){
 if(!beModelCtrlSCEffect_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlSCEffect_meta)[0x24/4]&4)) beModelCtrlSCEffect_registerNow();
 return beModelCtrlSCEffect_meta;
}
}
#pragma pop
