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
void beModelCtrlMSGBOX_arkRegister();
void igNamedObject_register();
extern char beModelCtrlMOVE_className[];
extern char beModelCtrlMOVE_fieldTypes[];
extern char beModelCtrlMOVE_fieldNames[];
extern char beModelCtrlMOVE_fieldStorage[];
extern char beModelCtrlMOVE_fieldOffsets[];
extern void *beModelCtrlMOVE_meta;
extern void *beModelCtrlMSGBOX_meta;
void beModelCtrlMOVE_register();
void *beModelCtrlMOVE_getMetaCall();
void beModelCtrlMOVE_fieldInit();
}
extern "C" {
void beModelCtrlMOVE_arkRegister(){
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
 meta_appendFields(meta,beModelCtrlMOVE_fieldTypes,0x2);
 meta_setupFields(meta,beModelCtrlMOVE_fieldNames,beModelCtrlMOVE_fieldStorage,beModelCtrlMOVE_fieldOffsets,field);
}
}
#pragma pop
