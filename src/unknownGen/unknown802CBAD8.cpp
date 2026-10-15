#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlMOVE_getMeta();
void beModelCtrlMOVE_vtableRead();
void *fn_80023CF4();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlMSGBOX_registerNow();
void igNamedObject_register();
extern char beModelCtrlMOVE_className[];
extern char lbl_804D1024[];
extern char lbl_804D102C[];
extern char lbl_804D1034[];
extern char lbl_804D103C[];
extern void *beModelCtrlMOVE_meta;
extern void *beModelCtrlMSGBOX_meta;
void beModelCtrlMOVE_register();
void *beModelCtrlMOVE_getMetaCall();
void beModelCtrlMOVE_fieldInit();
}
extern "C" {
void beModelCtrlMOVE_registerNow(){
 meta_registerNow((int)beModelCtrlMOVE_register);
}
void beModelCtrlMOVE_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beModelCtrlMOVE_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlMOVE_getMetaCall,(int)beModelCtrlMOVE_className,20,(int)beModelCtrlMOVE_vtableRead,(int)beModelCtrlMOVE_fieldInit,0,0);
}
void *beModelCtrlMOVE_getMetaCall(){return beModelCtrlMOVE_getMeta();}
void beModelCtrlMOVE_fieldInit(){
 void *meta=beModelCtrlMOVE_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804D1024,0x2);
 meta_setupFields(meta,lbl_804D102C,lbl_804D1034,lbl_804D103C,field);
}
void *beModelCtrlMSGBOX_getMeta(){
 if(!beModelCtrlMSGBOX_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlMSGBOX_meta)[0x24/4]&4)) beModelCtrlMSGBOX_registerNow();
 return beModelCtrlMSGBOX_meta;
}
}
#pragma pop
