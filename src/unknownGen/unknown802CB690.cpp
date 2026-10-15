#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlMOVERL_getMeta();
void beModelCtrlMOVERL_vtableRead();
void *fn_80023CF4();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlMOVEEX_registerNow();
void igNamedObject_register();
extern char beModelCtrlMOVERL_className[];
extern char lbl_804D0FA4[];
extern char lbl_804D0FAC[];
extern char lbl_804D0FB4[];
extern char lbl_804D0FBC[];
extern void *beModelCtrlMOVERL_meta;
extern void *beModelCtrlMOVEEX_meta;
void beModelCtrlMOVERL_register();
void *beModelCtrlMOVERL_getMetaCall();
void beModelCtrlMOVERL_fieldInit();
}
extern "C" {
void beModelCtrlMOVERL_registerNow(){
 meta_registerNow((int)beModelCtrlMOVERL_register);
}
void beModelCtrlMOVERL_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beModelCtrlMOVERL_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlMOVERL_getMetaCall,(int)beModelCtrlMOVERL_className,20,(int)beModelCtrlMOVERL_vtableRead,(int)beModelCtrlMOVERL_fieldInit,0,0);
}
void *beModelCtrlMOVERL_getMetaCall(){return beModelCtrlMOVERL_getMeta();}
void beModelCtrlMOVERL_fieldInit(){
 void *meta=beModelCtrlMOVERL_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804D0FA4,0x2);
 meta_setupFields(meta,lbl_804D0FAC,lbl_804D0FB4,lbl_804D0FBC,field);
}
void *beModelCtrlMOVEEX_getMeta(){
 if(!beModelCtrlMOVEEX_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlMOVEEX_meta)[0x24/4]&4)) beModelCtrlMOVEEX_registerNow();
 return beModelCtrlMOVEEX_meta;
}
}
#pragma pop
