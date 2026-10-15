#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlPDMOVE_getMeta();
void beModelCtrlPDMOVE_vtableRead();
void *fn_80023CF4();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlMOVERL_registerNow();
void igNamedObject_register();
extern char beModelCtrlPDMOVE_className[];
extern char lbl_804D0F84[];
extern char lbl_804D0F8C[];
extern char lbl_804D0F94[];
extern char lbl_804D0F9C[];
extern void *beModelCtrlPDMOVE_meta;
extern void *beModelCtrlMOVERL_meta;
void beModelCtrlPDMOVE_register();
void *beModelCtrlPDMOVE_getMetaCall();
void beModelCtrlPDMOVE_fieldInit();
}
extern "C" {
void beModelCtrlPDMOVE_registerNow(){
 meta_registerNow((int)beModelCtrlPDMOVE_register);
}
void beModelCtrlPDMOVE_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beModelCtrlPDMOVE_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlPDMOVE_getMetaCall,(int)beModelCtrlPDMOVE_className,20,(int)beModelCtrlPDMOVE_vtableRead,(int)beModelCtrlPDMOVE_fieldInit,0,0);
}
void *beModelCtrlPDMOVE_getMetaCall(){return beModelCtrlPDMOVE_getMeta();}
void beModelCtrlPDMOVE_fieldInit(){
 void *meta=beModelCtrlPDMOVE_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0F84,0x2);
 fn_800659C0(meta,lbl_804D0F8C,lbl_804D0F94,lbl_804D0F9C,field);
}
void *beModelCtrlMOVERL_getMeta(){
 if(!beModelCtrlMOVERL_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlMOVERL_meta)[0x24/4]&4)) beModelCtrlMOVERL_registerNow();
 return beModelCtrlMOVERL_meta;
}
}
#pragma pop
