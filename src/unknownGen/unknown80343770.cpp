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
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beNDMWShinkaCtrl_registerNow();
void igObjectList_register();
void igObject_register();
extern char beNDMWItemBaseList_className[];
extern char beNDMWItemBase_className[];
extern char lbl_804E3D50[];
extern char lbl_804E3D58[];
extern char lbl_804E3D64[];
extern char lbl_804E3D70[];
extern char lbl_804E3D7C[];
extern char beNDMWItemBaseList_meta[];
extern void *beNDMWItemBase_meta;
extern void *beNDMWShinkaCtrl_meta;
extern void *lbl_805621F4;
void beNDMWItemBaseList_register();
void *beNDMWItemBaseList_getMetaCall();
void *beNDMWItemBase_getMeta();
void beNDMWItemBase_registerNow();
void beNDMWItemBase_register();
void *beNDMWItemBase_getMetaCall();
void beNDMWItemBase_fieldInit();
}
extern "C" {
void beNDMWItemBaseList_registerNow(){
 meta_registerNow((int)beNDMWItemBaseList_register);
}
void beNDMWItemBaseList_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWItemBaseList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWItemBaseList_getMetaCall,(int)beNDMWItemBaseList_className,20,(int)beNDMWItemBaseList_vtableRead,0,0,(int)lbl_804E3D50);
}
void *beNDMWItemBaseList_getMetaCall(){return beNDMWItemBaseList_getMeta();}
void *beNDMWItemBase_metaObject(){
 if(!beNDMWItemBase_meta) beNDMWItemBase_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWItemBase_meta;
}
void *beNDMWItemBase_getMeta(){
 if(!beNDMWItemBase_meta || !(reinterpret_cast<unsigned int *>(beNDMWItemBase_meta)[0x24/4]&4)) beNDMWItemBase_registerNow();
 return beNDMWItemBase_meta;
}
void beNDMWItemBase_registerNow(){
 meta_registerNow((int)beNDMWItemBase_register);
}
void beNDMWItemBase_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWItemBase_meta,(int)igObject_register,(int)fn_800237D0,(int)beNDMWItemBase_getMetaCall,(int)beNDMWItemBase_className,20,0,(int)beNDMWItemBase_fieldInit,0,0);
}
void *beNDMWItemBase_getMetaCall(){return beNDMWItemBase_getMeta();}
void beNDMWItemBase_fieldInit(){
 void *meta=beNDMWItemBase_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D58,0x3);
 fn_800659C0(meta,lbl_804E3D64,lbl_804E3D70,lbl_804E3D7C,field);
}
void *beNDMWShinkaCtrl_metaObject(){
 if(!beNDMWShinkaCtrl_meta) beNDMWShinkaCtrl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWShinkaCtrl_meta;
}
void *beNDMWShinkaCtrl_getMeta(){
 if(!beNDMWShinkaCtrl_meta || !(reinterpret_cast<unsigned int *>(beNDMWShinkaCtrl_meta)[0x24/4]&4)) beNDMWShinkaCtrl_registerNow();
 return beNDMWShinkaCtrl_meta;
}
}
#pragma pop
