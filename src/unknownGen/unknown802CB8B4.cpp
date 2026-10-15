#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlMOVEEX_getMeta();
void beModelCtrlMOVEEX_vtableRead();
void *fn_80023CF4();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beModelCtrlMOVEEX_className[];
extern char beModelCtrlMOVEEX_fieldTypes[];
extern char beModelCtrlMOVEEX_fieldNames[];
extern char beModelCtrlMOVEEX_fieldStorage[];
extern char beModelCtrlMOVEEX_fieldOffsets[];
extern void *beModelCtrlMOVEEX_meta;
void beModelCtrlMOVEEX_register();
void *beModelCtrlMOVEEX_getMetaCall();
void beModelCtrlMOVEEX_fieldInit();
}
extern "C" {
void beModelCtrlMOVEEX_arkRegister(){
 meta_registerNow((int)beModelCtrlMOVEEX_register);
}
void beModelCtrlMOVEEX_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beModelCtrlMOVEEX_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlMOVEEX_getMetaCall,(int)beModelCtrlMOVEEX_className,36,(int)beModelCtrlMOVEEX_vtableRead,(int)beModelCtrlMOVEEX_fieldInit,0,0);
}
void *beModelCtrlMOVEEX_getMetaCall(){return beModelCtrlMOVEEX_getMeta();}
void beModelCtrlMOVEEX_fieldInit(){
 void *meta=beModelCtrlMOVEEX_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beModelCtrlMOVEEX_fieldTypes,0x6);
 meta_setupFields(meta,beModelCtrlMOVEEX_fieldNames,beModelCtrlMOVEEX_fieldStorage,beModelCtrlMOVEEX_fieldOffsets,field);
}
}
#pragma pop
