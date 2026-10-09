#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlMOVEEX_getMeta();
void beModelCtrlMOVEEX_vtableRead();
void *fn_80023CF4();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_8041F29C[];
extern char lbl_804D0FC4[];
extern char lbl_804D0FDC[];
extern char lbl_804D0FF4[];
extern char lbl_804D100C[];
extern void *lbl_80534EF0;
void beModelCtrlMOVEEX_register();
void *beModelCtrlMOVEEX_getMetaCall();
void beModelCtrlMOVEEX_fieldInit();
}
extern "C" {
void fn_802CB8B4(){
 fn_80066188((int)beModelCtrlMOVEEX_register);
}
void beModelCtrlMOVEEX_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534EF0,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlMOVEEX_getMetaCall,(int)lbl_8041F29C,36,(int)beModelCtrlMOVEEX_vtableRead,(int)beModelCtrlMOVEEX_fieldInit,0,0);
}
void *beModelCtrlMOVEEX_getMetaCall(){return beModelCtrlMOVEEX_getMeta();}
void beModelCtrlMOVEEX_fieldInit(){
 void *meta=lbl_80534EF0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0FC4,0x6);
 fn_800659C0(meta,lbl_804D0FDC,lbl_804D0FF4,lbl_804D100C,field);
}
}
#pragma pop
