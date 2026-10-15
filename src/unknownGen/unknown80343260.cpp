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
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void *fn_80342F9C();
void *fn_80343158();
void beNDMWItemBaseList_registerNow();
extern char beNDMWItemWeapon_className[];
extern char beNDMWItemRevisionPocketBase_className[];
extern char beNDMWItemRevisionBase_className[];
extern char lbl_804E3D30[];
extern char lbl_804E3D34[];
extern char lbl_804E3D38[];
extern char lbl_804E3D3C[];
extern char lbl_804E3D40[];
extern char lbl_804E3D44[];
extern char lbl_804E3D48[];
extern char lbl_804E3D4C[];
extern char beNDMWItemWeapon_meta[];
extern void *beNDMWItemRevisionPocketBase_meta;
extern void *beNDMWItemRevisionBase_meta;
extern void *beNDMWItemBaseList_meta;
extern void *lbl_805621F4;
void beNDMWItemWeapon_register();
void *beNDMWItemWeapon_getMetaCall();
void *beNDMWItemRevisionPocketBase_getMeta();
void beNDMWItemRevisionPocketBase_registerNow();
void beNDMWItemRevisionPocketBase_register();
void *beNDMWItemRevisionPocketBase_getMetaCall();
void beNDMWItemRevisionPocketBase_fieldInit();
void *beNDMWItemRevisionBase_getMeta();
void beNDMWItemRevisionBase_registerNow();
void beNDMWItemRevisionBase_register();
void *beNDMWItemRevisionBase_getMetaCall();
void beNDMWItemRevisionBase_fieldInit();
}
extern "C" {
void beNDMWItemWeapon_registerNow(){
 meta_registerNow((int)beNDMWItemWeapon_register);
}
void beNDMWItemWeapon_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWItemWeapon_meta,(int)beNDMWItemRevisionPocketBase_register,(int)fn_80343158,(int)beNDMWItemWeapon_getMetaCall,(int)beNDMWItemWeapon_className,28,(int)beNDMWItemWeapon_vtableRead,0,0,0);
}
void *beNDMWItemWeapon_getMetaCall(){return beNDMWItemWeapon_getMeta();}
void *beNDMWItemRevisionPocketBase_getMeta(){
 if(!beNDMWItemRevisionPocketBase_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemRevisionPocketBase_meta)[0x24/4]&4)) beNDMWItemRevisionPocketBase_registerNow();
 return beNDMWItemRevisionPocketBase_meta;
}
void beNDMWItemRevisionPocketBase_registerNow(){
 meta_registerNow((int)beNDMWItemRevisionPocketBase_register);
}
void beNDMWItemRevisionPocketBase_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWItemRevisionPocketBase_meta,(int)beNDMWItemRevisionBase_register,(int)fn_80342F9C,(int)beNDMWItemRevisionPocketBase_getMetaCall,(int)beNDMWItemRevisionPocketBase_className,28,0,(int)beNDMWItemRevisionPocketBase_fieldInit,0,0);
}
void *beNDMWItemRevisionPocketBase_getMetaCall(){return beNDMWItemRevisionPocketBase_getMeta();}
void beNDMWItemRevisionPocketBase_fieldInit(){
 void *meta=beNDMWItemRevisionPocketBase_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D30,0x1);
 fn_800659C0(meta,lbl_804E3D34,lbl_804E3D38,lbl_804E3D3C,field);
}
void *beNDMWItemRevisionBase_getMeta(){
 if(!beNDMWItemRevisionBase_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemRevisionBase_meta)[0x24/4]&4)) beNDMWItemRevisionBase_registerNow();
 return beNDMWItemRevisionBase_meta;
}
void beNDMWItemRevisionBase_registerNow(){
 meta_registerNow((int)beNDMWItemRevisionBase_register);
}
void beNDMWItemRevisionBase_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWItemRevisionBase_meta,(int)beNDMWItemBase_register,(int)fn_803425BC,(int)beNDMWItemRevisionBase_getMetaCall,(int)beNDMWItemRevisionBase_className,24,0,(int)beNDMWItemRevisionBase_fieldInit,0,0);
}
void *beNDMWItemRevisionBase_getMetaCall(){return beNDMWItemRevisionBase_getMeta();}
void beNDMWItemRevisionBase_fieldInit(){
 void *meta=beNDMWItemRevisionBase_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D40,0x1);
 fn_800659C0(meta,lbl_804E3D44,lbl_804E3D48,lbl_804E3D4C,field);
}
void *beNDMWItemBaseList_create(void *object){
 beNDMWItemBaseList_registerNow();
 return meta_createInstance(beNDMWItemBaseList_meta,object);
}
void *beNDMWItemBaseList_metaObject(){
 if(!beNDMWItemBaseList_meta) beNDMWItemBaseList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWItemBaseList_meta;
}
void *beNDMWItemBaseList_getMeta(){
 if(!beNDMWItemBaseList_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemBaseList_meta)[0x24/4]&4)) beNDMWItemBaseList_registerNow();
 return beNDMWItemBaseList_meta;
}
}
#pragma pop
