#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlPDMOVE_getMeta();
void beModelCtrlPDMOVE_vtableRead();
void *fn_80023CF4();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlMOVERL_arkRegister();
void igNamedObject_register();
extern char beModelCtrlPDMOVE_className[];
extern char beModelCtrlPDMOVE_fieldTypes[];
extern char beModelCtrlPDMOVE_fieldNames[];
extern char beModelCtrlPDMOVE_fieldStorage[];
extern char beModelCtrlPDMOVE_fieldOffsets[];
extern void *beModelCtrlPDMOVE_meta;
extern void *beModelCtrlMOVERL_meta;
void beModelCtrlPDMOVE_register();
void *beModelCtrlPDMOVE_getMetaCall();
void beModelCtrlPDMOVE_fieldInit();
}
extern "C" {
void beModelCtrlPDMOVE_arkRegister(){
 meta_registerNow((int)beModelCtrlPDMOVE_register);
}
void beModelCtrlPDMOVE_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beModelCtrlPDMOVE_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlPDMOVE_getMetaCall,(int)beModelCtrlPDMOVE_className,20,(int)beModelCtrlPDMOVE_vtableRead,(int)beModelCtrlPDMOVE_fieldInit,0,0);
}
void *beModelCtrlPDMOVE_getMetaCall(){return beModelCtrlPDMOVE_getMeta();}
void beModelCtrlPDMOVE_fieldInit(){
 void *meta=beModelCtrlPDMOVE_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beModelCtrlPDMOVE_fieldTypes,0x2);
 meta_setupFields(meta,beModelCtrlPDMOVE_fieldNames,beModelCtrlPDMOVE_fieldStorage,beModelCtrlPDMOVE_fieldOffsets,field);
}
void *beModelCtrlMOVERL_getMeta(){
 if(!beModelCtrlMOVERL_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlMOVERL_meta)[0x24/4]&4)) beModelCtrlMOVERL_arkRegister();
 return beModelCtrlMOVERL_meta;
}
}
#pragma pop
