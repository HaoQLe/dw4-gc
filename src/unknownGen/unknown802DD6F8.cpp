#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDataObjInt_getMeta();
void beDataObjInt_vtableRead();
void *fn_80023CF4();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beDataBaseList_arkRegister();
void igNamedObject_register();
extern char beDataObjInt_className[];
extern char beDataObjInt_fieldTypes[];
extern char beDataObjInt_fieldNames[];
extern char beDataObjInt_fieldStorage[];
extern char beDataObjInt_fieldOffsets[];
extern void *beDataObjInt_meta;
extern void *beDataBaseList_meta;
void beDataObjInt_register();
void *beDataObjInt_getMetaCall();
void beDataObjInt_fieldInit();
}
extern "C" {
void beDataObjInt_arkRegister(){
 meta_registerNow((int)beDataObjInt_register);
}
void beDataObjInt_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beDataObjInt_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjInt_getMetaCall,(int)beDataObjInt_className,16,(int)beDataObjInt_vtableRead,(int)beDataObjInt_fieldInit,0,0);
}
void *beDataObjInt_getMetaCall(){return beDataObjInt_getMeta();}
void beDataObjInt_fieldInit(){
 void *meta=beDataObjInt_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beDataObjInt_fieldTypes,0x1);
 meta_setupFields(meta,beDataObjInt_fieldNames,beDataObjInt_fieldStorage,beDataObjInt_fieldOffsets,field);
}
void *beDataBaseList_getMeta(){
 if(!beDataBaseList_meta || !(reinterpret_cast<unsigned int *>(beDataBaseList_meta)[0x24/4]&4)) beDataBaseList_arkRegister();
 return beDataBaseList_meta;
}
}
#pragma pop
