#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWItemBase_register();
void *beNDMWItemWeapon_getMeta();
void beNDMWItemWeapon_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void *fn_80342F9C();
void *fn_80343158();
void beNDMWItemBaseList_arkRegister();
extern char beNDMWItemWeapon_className[];
extern char beNDMWItemRevisionPocketBase_className[];
extern char beNDMWItemRevisionBase_className[];
extern char beNDMWItemRevisionPocketBase_fieldTypes[];
extern char beNDMWItemRevisionPocketBase_fieldNames[];
extern char beNDMWItemRevisionPocketBase_fieldStorage[];
extern char beNDMWItemRevisionPocketBase_fieldOffsets[];
extern char beNDMWItemRevisionBase_fieldTypes[];
extern char beNDMWItemRevisionBase_fieldNames[];
extern char beNDMWItemRevisionBase_fieldStorage[];
extern char beNDMWItemRevisionBase_fieldOffsets[];
extern char beNDMWItemWeapon_meta[];
extern void *beNDMWItemRevisionPocketBase_meta;
extern void *beNDMWItemRevisionBase_meta;
extern void *beNDMWItemBaseList_meta;
extern void *lbl_805621F4;
void beNDMWItemWeapon_register();
void *beNDMWItemWeapon_getMetaCall();
void *beNDMWItemRevisionPocketBase_getMeta();
void beNDMWItemRevisionPocketBase_arkRegister();
void beNDMWItemRevisionPocketBase_register();
void *beNDMWItemRevisionPocketBase_getMetaCall();
void beNDMWItemRevisionPocketBase_fieldInit();
void *beNDMWItemRevisionBase_getMeta();
void beNDMWItemRevisionBase_arkRegister();
void beNDMWItemRevisionBase_register();
void *beNDMWItemRevisionBase_getMetaCall();
void beNDMWItemRevisionBase_fieldInit();
}
extern "C" {
void beNDMWItemWeapon_arkRegister(){
 meta_registerNow((int)beNDMWItemWeapon_register);
}
void beNDMWItemWeapon_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWItemWeapon_meta,(int)beNDMWItemRevisionPocketBase_register,(int)fn_80343158,(int)beNDMWItemWeapon_getMetaCall,(int)beNDMWItemWeapon_className,28,(int)beNDMWItemWeapon_vtableRead,0,0,0);
}
void *beNDMWItemWeapon_getMetaCall(){return beNDMWItemWeapon_getMeta();}
void *beNDMWItemRevisionPocketBase_getMeta(){
 if(!beNDMWItemRevisionPocketBase_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemRevisionPocketBase_meta)[0x24/4]&4)) beNDMWItemRevisionPocketBase_arkRegister();
 return beNDMWItemRevisionPocketBase_meta;
}
void beNDMWItemRevisionPocketBase_arkRegister(){
 meta_registerNow((int)beNDMWItemRevisionPocketBase_register);
}
void beNDMWItemRevisionPocketBase_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWItemRevisionPocketBase_meta,(int)beNDMWItemRevisionBase_register,(int)fn_80342F9C,(int)beNDMWItemRevisionPocketBase_getMetaCall,(int)beNDMWItemRevisionPocketBase_className,28,0,(int)beNDMWItemRevisionPocketBase_fieldInit,0,0);
}
void *beNDMWItemRevisionPocketBase_getMetaCall(){return beNDMWItemRevisionPocketBase_getMeta();}
void beNDMWItemRevisionPocketBase_fieldInit(){
 void *meta=beNDMWItemRevisionPocketBase_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWItemRevisionPocketBase_fieldTypes,0x1);
 meta_setupFields(meta,beNDMWItemRevisionPocketBase_fieldNames,beNDMWItemRevisionPocketBase_fieldStorage,beNDMWItemRevisionPocketBase_fieldOffsets,field);
}
void *beNDMWItemRevisionBase_getMeta(){
 if(!beNDMWItemRevisionBase_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemRevisionBase_meta)[0x24/4]&4)) beNDMWItemRevisionBase_arkRegister();
 return beNDMWItemRevisionBase_meta;
}
void beNDMWItemRevisionBase_arkRegister(){
 meta_registerNow((int)beNDMWItemRevisionBase_register);
}
void beNDMWItemRevisionBase_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWItemRevisionBase_meta,(int)beNDMWItemBase_register,(int)fn_803425BC,(int)beNDMWItemRevisionBase_getMetaCall,(int)beNDMWItemRevisionBase_className,24,0,(int)beNDMWItemRevisionBase_fieldInit,0,0);
}
void *beNDMWItemRevisionBase_getMetaCall(){return beNDMWItemRevisionBase_getMeta();}
void beNDMWItemRevisionBase_fieldInit(){
 void *meta=beNDMWItemRevisionBase_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWItemRevisionBase_fieldTypes,0x1);
 meta_setupFields(meta,beNDMWItemRevisionBase_fieldNames,beNDMWItemRevisionBase_fieldStorage,beNDMWItemRevisionBase_fieldOffsets,field);
}
void *beNDMWItemBaseList_create(void *object){
 beNDMWItemBaseList_arkRegister();
 return meta_createInstance(beNDMWItemBaseList_meta,object);
}
void *beNDMWItemBaseList_metaObject(){
 if(!beNDMWItemBaseList_meta) beNDMWItemBaseList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWItemBaseList_meta;
}
void *beNDMWItemBaseList_getMeta(){
 if(!beNDMWItemBaseList_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemBaseList_meta)[0x24/4]&4)) beNDMWItemBaseList_arkRegister();
 return beNDMWItemBaseList_meta;
}
}
#pragma pop
