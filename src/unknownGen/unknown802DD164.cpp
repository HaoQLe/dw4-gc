#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDataObjBool_getMeta();
void beDataObjBool_vtableRead();
void *fn_80023CF4();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beDataObjIntList_arkRegister();
void igNamedObject_register();
extern char beDataObjBool_className[];
extern char beDataObjBool_fieldTypes[];
extern char beDataObjBool_fieldNames[];
extern char beDataObjBool_fieldStorage[];
extern char beDataObjBool_fieldOffsets[];
extern void *beDataObjBool_meta;
extern void *beDataObjIntList_meta;
void beDataObjBool_register();
void *beDataObjBool_getMetaCall();
void beDataObjBool_fieldInit();
}
extern "C" {
void beDataObjBool_arkRegister(){
 meta_registerNow((int)beDataObjBool_register);
}
void beDataObjBool_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beDataObjBool_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjBool_getMetaCall,(int)beDataObjBool_className,16,(int)beDataObjBool_vtableRead,(int)beDataObjBool_fieldInit,0,0);
}
void *beDataObjBool_getMetaCall(){return beDataObjBool_getMeta();}
void beDataObjBool_fieldInit(){
 void *meta=beDataObjBool_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beDataObjBool_fieldTypes,0x1);
 meta_setupFields(meta,beDataObjBool_fieldNames,beDataObjBool_fieldStorage,beDataObjBool_fieldOffsets,field);
}
void *beDataObjIntList_create(void *object){
 beDataObjIntList_arkRegister();
 return meta_createInstance(beDataObjIntList_meta,object);
}
void *beDataObjIntList_getMeta(){
 if(!beDataObjIntList_meta || !(reinterpret_cast<unsigned int *>(beDataObjIntList_meta)[0x24/4]&4)) beDataObjIntList_arkRegister();
 return beDataObjIntList_meta;
}
}
#pragma pop
