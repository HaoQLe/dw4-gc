#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWItemBase_register();
void *beNDMWItemInstant_getMeta();
void beNDMWItemInstant_vtableRead();
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
void fn_80342B30();
extern char lbl_80455134[];
extern char lbl_804E3D10[];
extern char lbl_804E3D14[];
extern char lbl_804E3D18[];
extern char lbl_804E3D1C[];
extern void *lbl_80536734;
extern void *lbl_8053673C;
extern void *lbl_805621F4;
void beNDMWItemInstant_register();
void *beNDMWItemInstant_getMetaCall();
void beNDMWItemInstant_fieldInit();
}
extern "C" {
void fn_803428C0(){
 fn_80066188((int)beNDMWItemInstant_register);
}
void beNDMWItemInstant_register(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80536734,(int)beNDMWItemBase_register,(int)fn_803425BC,(int)beNDMWItemInstant_getMetaCall,(int)lbl_80455134,24,(int)beNDMWItemInstant_vtableRead,(int)beNDMWItemInstant_fieldInit,0,0);
}
void *beNDMWItemInstant_getMetaCall(){return beNDMWItemInstant_getMeta();}
void beNDMWItemInstant_fieldInit(){
 void *meta=lbl_80536734;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3D10,0x1);
 fn_800659C0(meta,lbl_804E3D14,lbl_804E3D18,lbl_804E3D1C,field);
}
void *fn_803429FC(void *object){
 fn_80342B30();
 return fn_8006546C(lbl_8053673C,object);
}
void *fn_80342A3C(){
 if(!lbl_8053673C) lbl_8053673C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053673C;
}
void *beNDMWItemDisk_getMeta(){
 if(!lbl_8053673C || !(reinterpret_cast<unsigned int *>(lbl_8053673C)[0x24/4]&4)) fn_80342B30();
 return lbl_8053673C;
}
}
#pragma pop
