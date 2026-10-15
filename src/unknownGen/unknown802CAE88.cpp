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
void beModelCtrlAIMAP_arkRegister();
void igNamedObject_register();
extern char beModelCtrlMUTEKI_className[];
extern char beModelCtrlMUTEKI_fieldTypes[];
extern char beModelCtrlMUTEKI_fieldNames[];
extern char beModelCtrlMUTEKI_fieldStorage[];
extern char beModelCtrlMUTEKI_fieldOffsets[];
extern void *beModelCtrlMUTEKI_meta;
extern void *beModelCtrlAIMAP_meta;
void beModelCtrlMUTEKI_register();
void *beModelCtrlMUTEKI_getMetaCall();
void beModelCtrlMUTEKI_fieldInit();
}
extern "C" {
void beModelCtrlMUTEKI_arkRegister(){
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
 meta_appendFields(meta,beModelCtrlMUTEKI_fieldTypes,0x1);
 meta_setupFields(meta,beModelCtrlMUTEKI_fieldNames,beModelCtrlMUTEKI_fieldStorage,beModelCtrlMUTEKI_fieldOffsets,field);
}
void *beModelCtrlAIMAP_getMeta(){
 if(!beModelCtrlAIMAP_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlAIMAP_meta)[0x24/4]&4)) beModelCtrlAIMAP_arkRegister();
 return beModelCtrlAIMAP_meta;
}
}
#pragma pop
