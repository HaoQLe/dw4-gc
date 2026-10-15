#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beModelCtrlAIData_getMeta();
void beModelCtrlAIData_vtableRead();
void *fn_80023CF4();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beModelCtrlHITBOX_arkRegister();
void igNamedObject_register();
extern char beModelCtrlAIData_className[];
extern char beModelCtrlAIData_fieldTypes[];
extern char beModelCtrlAIData_fieldNames[];
extern char beModelCtrlAIData_fieldStorage[];
extern char beModelCtrlAIData_fieldOffsets[];
extern void *beModelCtrlAIData_meta;
extern void *beModelCtrlHITBOX_meta;
void beModelCtrlAIData_register();
void *beModelCtrlAIData_getMetaCall();
void beModelCtrlAIData_fieldInit();
}
extern "C" {
void beModelCtrlAIData_arkRegister(){
 meta_registerNow((int)beModelCtrlAIData_register);
}
void beModelCtrlAIData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beModelCtrlAIData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlAIData_getMetaCall,(int)beModelCtrlAIData_className,24,(int)beModelCtrlAIData_vtableRead,(int)beModelCtrlAIData_fieldInit,0,0);
}
void *beModelCtrlAIData_getMetaCall(){return beModelCtrlAIData_getMeta();}
void beModelCtrlAIData_fieldInit(){
 void *meta=beModelCtrlAIData_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beModelCtrlAIData_fieldTypes,0x3);
 meta_setupFields(meta,beModelCtrlAIData_fieldNames,beModelCtrlAIData_fieldStorage,beModelCtrlAIData_fieldOffsets,field);
}
void *beModelCtrlHITBOX_create(void *object){
 beModelCtrlHITBOX_arkRegister();
 return meta_createInstance(beModelCtrlHITBOX_meta,object);
}
void *beModelCtrlHITBOX_getMeta(){
 if(!beModelCtrlHITBOX_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlHITBOX_meta)[0x24/4]&4)) beModelCtrlHITBOX_arkRegister();
 return beModelCtrlHITBOX_meta;
}
}
#pragma pop
