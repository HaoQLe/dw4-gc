#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beSeData_getMeta();
void beSeData_vtableRead();
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
void beSeCtl_arkRegister();
void igNamedObject_register();
extern char beSeData_className[];
extern char beSeData_fieldTypes[];
extern char beSeData_fieldNames[];
extern char beSeData_fieldStorage[];
extern char beSeData_fieldOffsets[];
extern void *beSeData_meta;
extern void *beSeCtl_meta;
extern void *lbl_805621F4;
void beSeData_register();
void *beSeData_getMetaCall();
void beSeData_fieldInit();
}
extern "C" {
void beSeData_arkRegister(){
 meta_registerNow((int)beSeData_register);
}
void beSeData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beSeData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beSeData_getMetaCall,(int)beSeData_className,20,(int)beSeData_vtableRead,(int)beSeData_fieldInit,0,0);
}
void *beSeData_getMetaCall(){return beSeData_getMeta();}
void beSeData_fieldInit(){
 void *meta=beSeData_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beSeData_fieldTypes,0x2);
 meta_setupFields(meta,beSeData_fieldNames,beSeData_fieldStorage,beSeData_fieldOffsets,field);
}
void *beSeCtl_create(void *object){
 beSeCtl_arkRegister();
 return meta_createInstance(beSeCtl_meta,object);
}
void *beSeCtl_metaObject(){
 if(!beSeCtl_meta) beSeCtl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSeCtl_meta;
}
void *beSeCtl_getMeta(){
 if(!beSeCtl_meta || !(reinterpret_cast<unsigned int *>(beSeCtl_meta)[0x24/4]&4)) beSeCtl_arkRegister();
 return beSeCtl_meta;
}
}
#pragma pop
