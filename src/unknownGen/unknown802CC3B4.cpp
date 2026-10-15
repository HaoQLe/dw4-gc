#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlLABELCTRL_getMeta();
void beModelCtrlLABELCTRL_vtableRead();
void *fn_80023CF4();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlLABEL_registerNow();
void igNamedObject_register();
extern char beModelCtrlLABELCTRL_className[];
extern char lbl_804D1044[];
extern char lbl_804D1048[];
extern char lbl_804D104C[];
extern char lbl_804D1050[];
extern void *beModelCtrlLABELCTRL_meta;
extern void *beModelCtrlLABEL_meta;
void beModelCtrlLABELCTRL_register();
void *beModelCtrlLABELCTRL_getMetaCall();
void beModelCtrlLABELCTRL_fieldInit();
}
extern "C" {
void beModelCtrlLABELCTRL_registerNow(){
 meta_registerNow((int)beModelCtrlLABELCTRL_register);
}
void beModelCtrlLABELCTRL_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beModelCtrlLABELCTRL_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlLABELCTRL_getMetaCall,(int)beModelCtrlLABELCTRL_className,16,(int)beModelCtrlLABELCTRL_vtableRead,(int)beModelCtrlLABELCTRL_fieldInit,0,0);
}
void *beModelCtrlLABELCTRL_getMetaCall(){return beModelCtrlLABELCTRL_getMeta();}
void beModelCtrlLABELCTRL_fieldInit(){
 void *meta=beModelCtrlLABELCTRL_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D1044,0x1);
 fn_800659C0(meta,lbl_804D1048,lbl_804D104C,lbl_804D1050,field);
}
void *beModelCtrlLABEL_getMeta(){
 if(!beModelCtrlLABEL_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlLABEL_meta)[0x24/4]&4)) beModelCtrlLABEL_registerNow();
 return beModelCtrlLABEL_meta;
}
}
#pragma pop
