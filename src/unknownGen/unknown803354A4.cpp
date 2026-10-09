#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beSaveIntfComMdlData_getMeta();
void beSaveIntfComMdlData_vtableRead();
void *fn_800237D0();
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_8033571C();
void igObject_register();
extern char lbl_80453EFC[];
extern char lbl_804E21A0[];
extern char lbl_804E21AC[];
extern char lbl_804E21B8[];
extern char lbl_804E21C4[];
extern void *lbl_80535FFC;
extern void *lbl_8053600C;
void beSaveIntfComMdlData_register();
void *beSaveIntfComMdlData_getMetaCall();
void beSaveIntfComMdlData_fieldInit();
}
extern "C" {
void fn_803354A4(){
 fn_80066188((int)beSaveIntfComMdlData_register);
}
void beSaveIntfComMdlData_register(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80535FFC,(int)igObject_register,(int)fn_800237D0,(int)beSaveIntfComMdlData_getMetaCall,(int)lbl_80453EFC,20,(int)beSaveIntfComMdlData_vtableRead,(int)beSaveIntfComMdlData_fieldInit,0,0);
}
void *beSaveIntfComMdlData_getMetaCall(){return beSaveIntfComMdlData_getMeta();}
void beSaveIntfComMdlData_fieldInit(){
 void *meta=lbl_80535FFC;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E21A0,0x3);
 fn_800659C0(meta,lbl_804E21AC,lbl_804E21B8,lbl_804E21C4,field);
}
void *fn_803355E0(void *object){
 fn_8033571C();
 return fn_8006546C(lbl_8053600C,object);
}
void *beNDMWSaveIntfCtrlData_getMeta(){
 if(!lbl_8053600C || !(reinterpret_cast<unsigned int *>(lbl_8053600C)[0x24/4]&4)) fn_8033571C();
 return lbl_8053600C;
}
}
#pragma pop
