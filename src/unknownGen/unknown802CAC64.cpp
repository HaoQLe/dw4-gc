#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlHITBOX_getMeta();
void beModelCtrlHITBOX_vtableRead();
void *fn_80023CF4();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlMUTEKI_registerNow();
void igNamedObject_register();
extern char beModelCtrlHITBOX_className[];
extern char lbl_804D0F24[];
extern char lbl_804D0F38[];
extern char lbl_804D0F4C[];
extern char lbl_804D0F60[];
extern void *beModelCtrlHITBOX_meta;
extern void *beModelCtrlMUTEKI_meta;
void beModelCtrlHITBOX_register();
void *beModelCtrlHITBOX_getMetaCall();
void beModelCtrlHITBOX_fieldInit();
}
extern "C" {
void beModelCtrlHITBOX_registerNow(){
 meta_registerNow((int)beModelCtrlHITBOX_register);
}
void beModelCtrlHITBOX_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beModelCtrlHITBOX_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlHITBOX_getMetaCall,(int)beModelCtrlHITBOX_className,48,(int)beModelCtrlHITBOX_vtableRead,(int)beModelCtrlHITBOX_fieldInit,0,0);
}
void *beModelCtrlHITBOX_getMetaCall(){return beModelCtrlHITBOX_getMeta();}
void beModelCtrlHITBOX_fieldInit(){
 void *meta=beModelCtrlHITBOX_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804D0F24,0x5);
 meta_setupFields(meta,lbl_804D0F38,lbl_804D0F4C,lbl_804D0F60,field);
}
void *beModelCtrlMUTEKI_getMeta(){
 if(!beModelCtrlMUTEKI_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlMUTEKI_meta)[0x24/4]&4)) beModelCtrlMUTEKI_registerNow();
 return beModelCtrlMUTEKI_meta;
}
}
#pragma pop
