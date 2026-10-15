#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlMUTEKI_getMeta();
void beModelCtrlMUTEKI_vtableRead();
void *fn_80023CF4();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlAIMAP_registerNow();
void igNamedObject_register();
extern char beModelCtrlMUTEKI_className[];
extern char lbl_804D0F74[];
extern char lbl_804D0F78[];
extern char lbl_804D0F7C[];
extern char lbl_804D0F80[];
extern void *beModelCtrlMUTEKI_meta;
extern void *beModelCtrlAIMAP_meta;
void beModelCtrlMUTEKI_register();
void *beModelCtrlMUTEKI_getMetaCall();
void beModelCtrlMUTEKI_fieldInit();
}
extern "C" {
void beModelCtrlMUTEKI_registerNow(){
 meta_registerNow((int)beModelCtrlMUTEKI_register);
}
void beModelCtrlMUTEKI_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beModelCtrlMUTEKI_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlMUTEKI_getMetaCall,(int)beModelCtrlMUTEKI_className,16,(int)beModelCtrlMUTEKI_vtableRead,(int)beModelCtrlMUTEKI_fieldInit,0,0);
}
void *beModelCtrlMUTEKI_getMetaCall(){return beModelCtrlMUTEKI_getMeta();}
void beModelCtrlMUTEKI_fieldInit(){
 void *meta=beModelCtrlMUTEKI_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804D0F74,0x1);
 meta_setupFields(meta,lbl_804D0F78,lbl_804D0F7C,lbl_804D0F80,field);
}
void *beModelCtrlAIMAP_getMeta(){
 if(!beModelCtrlAIMAP_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlAIMAP_meta)[0x24/4]&4)) beModelCtrlAIMAP_registerNow();
 return beModelCtrlAIMAP_meta;
}
}
#pragma pop
