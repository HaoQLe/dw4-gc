#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beActionStarterData_getMeta();
void beActionStarterData_vtableRead();
void *fn_80023CF4();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beActionStarter_arkRegister();
void igNamedObject_register();
extern char beActionStarterData_className[];
extern char beActionStarterData_fieldTypes[];
extern char beActionStarterData_fieldNames[];
extern char beActionStarterData_fieldStorage[];
extern char beActionStarterData_fieldOffsets[];
extern void *beActionStarterData_meta;
extern void *beActionStarter_meta;
extern void *lbl_805621F4;
void beActionStarterData_register();
void *beActionStarterData_getMetaCall();
void beActionStarterData_fieldInit();
}
extern "C" {
void beActionStarterData_arkRegister(){
 meta_registerNow((int)beActionStarterData_register);
}
void beActionStarterData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beActionStarterData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beActionStarterData_getMetaCall,(int)beActionStarterData_className,36,(int)beActionStarterData_vtableRead,(int)beActionStarterData_fieldInit,0,0);
}
void *beActionStarterData_getMetaCall(){return beActionStarterData_getMeta();}
void beActionStarterData_fieldInit(){
 void *meta=beActionStarterData_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beActionStarterData_fieldTypes,0x5);
 meta_setupFields(meta,beActionStarterData_fieldNames,beActionStarterData_fieldStorage,beActionStarterData_fieldOffsets,field);
}
void *beActionStarter_create(void *object){
 beActionStarter_arkRegister();
 return meta_createInstance(beActionStarter_meta,object);
}
void *beActionStarter_metaObject(){
 if(!beActionStarter_meta) beActionStarter_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beActionStarter_meta;
}
void *beActionStarter_getMeta(){
 if(!beActionStarter_meta || !(reinterpret_cast<unsigned int *>(beActionStarter_meta)[0x24/4]&4)) beActionStarter_arkRegister();
 return beActionStarter_meta;
}
}
#pragma pop
