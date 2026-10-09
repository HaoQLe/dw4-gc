#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWItemBase_register();
void *beNDMWItemWeapon_getMeta();
void beNDMWItemWeapon_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
void *fn_80342F9C();
void *fn_80343158();
void fn_80343770();
extern char lbl_804551A4[];
extern char lbl_804551B8[];
extern char lbl_804551E0[];
extern char lbl_804E3D30[];
extern char lbl_804E3D34[];
extern char lbl_804E3D38[];
extern char lbl_804E3D3C[];
extern char lbl_804E3D40[];
extern char lbl_804E3D44[];
extern char lbl_804E3D48[];
extern char lbl_804E3D4C[];
extern char lbl_80536750[];
extern void *lbl_80536754;
extern void *lbl_8053675C;
extern void *lbl_80536764;
extern void *lbl_805621F4;
void beNDMWItemWeapon_register();
void *beNDMWItemWeapon_getMetaCall();
void *beNDMWItemRevisionPocketBase_getMeta();
void fn_80343360();
void beNDMWItemRevisionPocketBase_register();
void *beNDMWItemRevisionPocketBase_getMetaCall();
void beNDMWItemRevisionPocketBase_fieldInit();
void *beNDMWItemRevisionBase_getMeta();
void fn_803434E4();
void beNDMWItemRevisionBase_register();
void *beNDMWItemRevisionBase_getMetaCall();
void beNDMWItemRevisionBase_fieldInit();
}
extern "C" {
void fn_80343260(){
 fn_80066188((int)beNDMWItemWeapon_register);
}
void beNDMWItemWeapon_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536750,(int)beNDMWItemRevisionPocketBase_register,(int)fn_80343158,(int)beNDMWItemWeapon_getMetaCall,(int)lbl_804551A4,28,(int)beNDMWItemWeapon_vtableRead,0,0,0);
}
void *beNDMWItemWeapon_getMetaCall(){return beNDMWItemWeapon_getMeta();}
void *beNDMWItemRevisionPocketBase_getMeta(){
 if(!lbl_80536754 || !(reinterpret_cast<unsigned int *>(lbl_80536754)[0x24/4]&4)) fn_80343360();
 return lbl_80536754;
}
void fn_80343360(){
 fn_80066188((int)beNDMWItemRevisionPocketBase_register);
}
void beNDMWItemRevisionPocketBase_register(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80536754,(int)beNDMWItemRevisionBase_register,(int)fn_80342F9C,(int)beNDMWItemRevisionPocketBase_getMetaCall,(int)lbl_804551B8,28,0,(int)beNDMWItemRevisionPocketBase_fieldInit,0,0);
}
void *beNDMWItemRevisionPocketBase_getMetaCall(){return beNDMWItemRevisionPocketBase_getMeta();}
void beNDMWItemRevisionPocketBase_fieldInit(){
 void *meta=lbl_80536754;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D30,0x1);
 fn_800659C0(meta,lbl_804E3D34,lbl_804E3D38,lbl_804E3D3C,field);
}
void *beNDMWItemRevisionBase_getMeta(){
 if(!lbl_8053675C || !(reinterpret_cast<unsigned int *>(lbl_8053675C)[0x24/4]&4)) fn_803434E4();
 return lbl_8053675C;
}
void fn_803434E4(){
 fn_80066188((int)beNDMWItemRevisionBase_register);
}
void beNDMWItemRevisionBase_register(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_8053675C,(int)beNDMWItemBase_register,(int)fn_803425BC,(int)beNDMWItemRevisionBase_getMetaCall,(int)lbl_804551E0,24,0,(int)beNDMWItemRevisionBase_fieldInit,0,0);
}
void *beNDMWItemRevisionBase_getMetaCall(){return beNDMWItemRevisionBase_getMeta();}
void beNDMWItemRevisionBase_fieldInit(){
 void *meta=lbl_8053675C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D40,0x1);
 fn_800659C0(meta,lbl_804E3D44,lbl_804E3D48,lbl_804E3D4C,field);
}
void *fn_8034361C(void *object){
 fn_80343770();
 return fn_8006546C(lbl_80536764,object);
}
void *fn_8034365C(){
 if(!lbl_80536764) lbl_80536764=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536764;
}
void *beNDMWItemBaseList_getMeta(){
 if(!lbl_80536764 || !(reinterpret_cast<unsigned int *>(lbl_80536764)[0x24/4]&4)) fn_80343770();
 return lbl_80536764;
}
}
#pragma pop
