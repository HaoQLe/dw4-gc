#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWItemBaseList_getMeta();
void beNDMWItemBaseList_vtableRead();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beNDMWShinkaCtrl_arkRegister();
void igObjectList_register();
void igObject_register();
extern char beNDMWItemBaseList_className[];
extern char beNDMWItemBase_className[];
extern char beNDMWItemBaseList_dependencies[];
extern char beNDMWItemBase_fieldTypes[];
extern char beNDMWItemBase_fieldNames[];
extern char beNDMWItemBase_fieldStorage[];
extern char beNDMWItemBase_fieldOffsets[];
extern char beNDMWItemBaseList_meta[];
extern void *beNDMWItemBase_meta;
extern void *beNDMWShinkaCtrl_meta;
extern void *lbl_805621F4;
void beNDMWItemBaseList_register();
void *beNDMWItemBaseList_getMetaCall();
void *beNDMWItemBase_getMeta();
void beNDMWItemBase_arkRegister();
void beNDMWItemBase_register();
void *beNDMWItemBase_getMetaCall();
void beNDMWItemBase_fieldInit();
}
extern "C" {
void beNDMWItemBaseList_arkRegister(){
 meta_registerNow((int)beNDMWItemBaseList_register);
}
void beNDMWItemBaseList_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWItemBaseList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWItemBaseList_getMetaCall,(int)beNDMWItemBaseList_className,20,(int)beNDMWItemBaseList_vtableRead,0,0,(int)beNDMWItemBaseList_dependencies);
}
void *beNDMWItemBaseList_getMetaCall(){return beNDMWItemBaseList_getMeta();}
void *beNDMWItemBase_metaObject(){
 if(!beNDMWItemBase_meta) beNDMWItemBase_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWItemBase_meta;
}
void *beNDMWItemBase_getMeta(){
 if(!beNDMWItemBase_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemBase_meta)[0x24/4]&4)) beNDMWItemBase_arkRegister();
 return beNDMWItemBase_meta;
}
void beNDMWItemBase_arkRegister(){
 meta_registerNow((int)beNDMWItemBase_register);
}
void beNDMWItemBase_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWItemBase_meta,(int)igObject_register,(int)fn_800237D0,(int)beNDMWItemBase_getMetaCall,(int)beNDMWItemBase_className,20,0,(int)beNDMWItemBase_fieldInit,0,0);
}
void *beNDMWItemBase_getMetaCall(){return beNDMWItemBase_getMeta();}
void beNDMWItemBase_fieldInit(){
 void *meta=beNDMWItemBase_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWItemBase_fieldTypes,0x3);
 meta_setupFields(meta,beNDMWItemBase_fieldNames,beNDMWItemBase_fieldStorage,beNDMWItemBase_fieldOffsets,field);
}
void *beNDMWShinkaCtrl_metaObject(){
 if(!beNDMWShinkaCtrl_meta) beNDMWShinkaCtrl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWShinkaCtrl_meta;
}
void *beNDMWShinkaCtrl_getMeta(){
 if(!beNDMWShinkaCtrl_meta || !(reinterpret_cast<unsigned int *>(beNDMWShinkaCtrl_meta)[0x24/4]&4)) beNDMWShinkaCtrl_arkRegister();
 return beNDMWShinkaCtrl_meta;
}
}
#pragma pop
