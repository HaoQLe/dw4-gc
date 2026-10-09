#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlMOVERL_getMeta();
void beModelCtrlMOVERL_vtableRead();
void *fn_80023CF4();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CB8B4();
void igNamedObject_register();
extern char lbl_8041F27C[];
extern char lbl_804D0FA4[];
extern char lbl_804D0FAC[];
extern char lbl_804D0FB4[];
extern char lbl_804D0FBC[];
extern void *lbl_80534EE4;
extern void *lbl_80534EF0;
void beModelCtrlMOVERL_register();
void *beModelCtrlMOVERL_getMetaCall();
void beModelCtrlMOVERL_fieldInit();
}
extern "C" {
void fn_802CB690(){
 fn_80066188((int)beModelCtrlMOVERL_register);
}
void beModelCtrlMOVERL_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534EE4,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlMOVERL_getMetaCall,(int)lbl_8041F27C,20,(int)beModelCtrlMOVERL_vtableRead,(int)beModelCtrlMOVERL_fieldInit,0,0);
}
void *beModelCtrlMOVERL_getMetaCall(){return beModelCtrlMOVERL_getMeta();}
void beModelCtrlMOVERL_fieldInit(){
 void *meta=lbl_80534EE4;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0FA4,0x2);
 fn_800659C0(meta,lbl_804D0FAC,lbl_804D0FB4,lbl_804D0FBC,field);
}
void *beModelCtrlMOVEEX_getMeta(){
 if(!lbl_80534EF0 || !(reinterpret_cast<unsigned int *>(lbl_80534EF0)[0x24/4]&4)) fn_802CB8B4();
 return lbl_80534EF0;
}
}
#pragma pop
