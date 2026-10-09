#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWStageCtlInfo_getMeta();
void beNDMWStageCtlInfo_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void fn_80334A5C();
extern char lbl_80453438[];
extern char lbl_80453E20[];
extern char lbl_804E2124[];
extern char lbl_804E2130[];
extern char lbl_80535FCC[];
extern void *lbl_80535FD0;
extern void *lbl_80535FD4;
extern void *lbl_805621F4;
void beNDMWStageCtlInfo_register();
void *beNDMWStageCtlInfo_getMetaCall();
}
extern "C" {
void fn_80334758(){
 fn_80066188((int)beNDMWStageCtlInfo_register);
}
void beNDMWStageCtlInfo_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FCC,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWStageCtlInfo_getMetaCall,(int)lbl_80453E20,28,(int)beNDMWStageCtlInfo_vtableRead,0,0,0);
}
void *beNDMWStageCtlInfo_getMetaCall(){return beNDMWStageCtlInfo_getMeta();}
void *fn_8033480C(){
 if(!lbl_80535FD0) lbl_80535FD0=fn_800635C8(lbl_80453438,lbl_804E2124,lbl_804E2130,0x3);
 return lbl_80535FD0;
}
void *fn_8033486C(void *object){
 fn_80334A5C();
 return fn_8006546C(lbl_80535FD4,object);
}
void *fn_803348AC(){
 if(!lbl_80535FD4) lbl_80535FD4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535FD4;
}
void *beNDMWStageCtl_getMeta(){
 if(!lbl_80535FD4 || !(reinterpret_cast<unsigned int *>(lbl_80535FD4)[0x24/4]&4)) fn_80334A5C();
 return lbl_80535FD4;
}
}
#pragma pop
