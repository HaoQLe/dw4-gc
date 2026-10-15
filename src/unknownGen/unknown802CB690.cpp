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
void beModelCtrlMOVEEX_arkRegister();
void igNamedObject_register();
extern char beModelCtrlMOVERL_className[];
extern char beModelCtrlMOVERL_fieldTypes[];
extern char beModelCtrlMOVERL_fieldNames[];
extern char beModelCtrlMOVERL_fieldStorage[];
extern char beModelCtrlMOVERL_fieldOffsets[];
extern void *beModelCtrlMOVERL_meta;
extern void *beModelCtrlMOVEEX_meta;
void beModelCtrlMOVERL_register();
void *beModelCtrlMOVERL_getMetaCall();
void beModelCtrlMOVERL_fieldInit();
}
extern "C" {
void beModelCtrlMOVERL_arkRegister(){
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
 meta_appendFields(meta,beModelCtrlMOVERL_fieldTypes,0x2);
 meta_setupFields(meta,beModelCtrlMOVERL_fieldNames,beModelCtrlMOVERL_fieldStorage,beModelCtrlMOVERL_fieldOffsets,field);
}
void *beModelCtrlMOVEEX_getMeta(){
 if(!beModelCtrlMOVEEX_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlMOVEEX_meta)[0x24/4]&4)) beModelCtrlMOVEEX_arkRegister();
 return beModelCtrlMOVEEX_meta;
}
}
#pragma pop
