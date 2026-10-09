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
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CB690();
void igNamedObject_register();
extern char lbl_8041F268[];
extern char lbl_804D0F84[];
extern char lbl_804D0F8C[];
extern char lbl_804D0F94[];
extern char lbl_804D0F9C[];
extern void *lbl_80534ED8;
extern void *lbl_80534EE4;
void beModelCtrlPDMOVE_register();
void *beModelCtrlPDMOVE_getMetaCall();
void beModelCtrlPDMOVE_fieldInit();
}
extern "C" {
void fn_802CB3E4(){
 fn_80066188((int)beModelCtrlPDMOVE_register);
}
void beModelCtrlPDMOVE_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534ED8,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlPDMOVE_getMetaCall,(int)lbl_8041F268,20,(int)beModelCtrlPDMOVE_vtableRead,(int)beModelCtrlPDMOVE_fieldInit,0,0);
}
void *beModelCtrlPDMOVE_getMetaCall(){return beModelCtrlPDMOVE_getMeta();}
void beModelCtrlPDMOVE_fieldInit(){
 void *meta=lbl_80534ED8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0F84,0x2);
 fn_800659C0(meta,lbl_804D0F8C,lbl_804D0F94,lbl_804D0F9C,field);
}
void *beModelCtrlMOVERL_getMeta(){
 if(!lbl_80534EE4 || !(reinterpret_cast<unsigned int *>(lbl_80534EE4)[0x24/4]&4)) fn_802CB690();
 return lbl_80534EE4;
}
}
#pragma pop
