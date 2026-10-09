#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlMUTEKI_getMeta();
void beModelCtrlMUTEKI_vtableRead();
void *fn_80023CF4();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802CB0AC();
void igNamedObject_register();
extern char lbl_8041F224[];
extern char lbl_804D0F74[];
extern char lbl_804D0F78[];
extern char lbl_804D0F7C[];
extern char lbl_804D0F80[];
extern void *lbl_80534EC8;
extern void *lbl_80534ED0;
void beModelCtrlMUTEKI_register();
void *beModelCtrlMUTEKI_getMetaCall();
void beModelCtrlMUTEKI_fieldInit();
}
extern "C" {
void fn_802CAE88(){
 fn_80066188((int)beModelCtrlMUTEKI_register);
}
void beModelCtrlMUTEKI_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534EC8,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlMUTEKI_getMetaCall,(int)lbl_8041F224,16,(int)beModelCtrlMUTEKI_vtableRead,(int)beModelCtrlMUTEKI_fieldInit,0,0);
}
void *beModelCtrlMUTEKI_getMetaCall(){return beModelCtrlMUTEKI_getMeta();}
void beModelCtrlMUTEKI_fieldInit(){
 void *meta=lbl_80534EC8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0F74,0x1);
 fn_800659C0(meta,lbl_804D0F78,lbl_804D0F7C,lbl_804D0F80,field);
}
void *beModelCtrlAIMAP_getMeta(){
 if(!lbl_80534ED0 || !(reinterpret_cast<unsigned int *>(lbl_80534ED0)[0x24/4]&4)) fn_802CB0AC();
 return lbl_80534ED0;
}
}
#pragma pop
