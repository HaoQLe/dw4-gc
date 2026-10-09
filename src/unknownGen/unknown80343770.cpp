#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWItemBaseList_getMeta();
void beNDMWItemBaseList_vtableRead();
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80343BB4();
void igObjectList_register();
void igObject_register();
extern char lbl_80455204[];
extern char lbl_80455218[];
extern char lbl_804E3D50[];
extern char lbl_804E3D58[];
extern char lbl_804E3D64[];
extern char lbl_804E3D70[];
extern char lbl_804E3D7C[];
extern char lbl_80536764[];
extern void *lbl_80536768;
extern void *lbl_80536778;
extern void *lbl_805621F4;
void beNDMWItemBaseList_register();
void *beNDMWItemBaseList_getMetaCall();
void *beNDMWItemBase_getMeta();
void fn_803438CC();
void beNDMWItemBase_register();
void *beNDMWItemBase_getMetaCall();
void beNDMWItemBase_fieldInit();
}
extern "C" {
void fn_80343770(){
 fn_80066188((int)beNDMWItemBaseList_register);
}
void beNDMWItemBaseList_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536764,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWItemBaseList_getMetaCall,(int)lbl_80455204,20,(int)beNDMWItemBaseList_vtableRead,0,0,(int)lbl_804E3D50);
}
void *beNDMWItemBaseList_getMetaCall(){return beNDMWItemBaseList_getMeta();}
void *fn_8034382C(){
 if(!lbl_80536768) lbl_80536768=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536768;
}
void *beNDMWItemBase_getMeta(){
 if(!lbl_80536768 || !(reinterpret_cast<unsigned int *>(lbl_80536768)[0x24/4]&4)) fn_803438CC();
 return lbl_80536768;
}
void fn_803438CC(){
 fn_80066188((int)beNDMWItemBase_register);
}
void beNDMWItemBase_register(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80536768,(int)igObject_register,(int)fn_800237D0,(int)beNDMWItemBase_getMetaCall,(int)lbl_80455218,20,0,(int)beNDMWItemBase_fieldInit,0,0);
}
void *beNDMWItemBase_getMetaCall(){return beNDMWItemBase_getMeta();}
void beNDMWItemBase_fieldInit(){
 void *meta=lbl_80536768;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D58,0x3);
 fn_800659C0(meta,lbl_804E3D64,lbl_804E3D70,lbl_804E3D7C,field);
}
void *fn_80343A04(){
 if(!lbl_80536778) lbl_80536778=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536778;
}
void *beNDMWShinkaCtrl_getMeta(){
 if(!lbl_80536778 || !(reinterpret_cast<unsigned int *>(lbl_80536778)[0x24/4]&4)) fn_80343BB4();
 return lbl_80536778;
}
}
#pragma pop
