#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWMcSlotPS2_getMeta();
void beNDMWMcSlotPS2_vtableRead();
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8033FD10();
void fn_803403E8();
void igObject_register();
extern char lbl_80454E58[];
extern char lbl_80454E68[];
extern char lbl_804E3904[];
extern char lbl_804E3918[];
extern char lbl_804E392C[];
extern char lbl_804E3940[];
extern char lbl_80536600[];
extern void *lbl_80536604;
extern void *lbl_8053661C;
extern void *lbl_805621F4;
void beNDMWMcSlotPS2_register();
void *beNDMWMcSlotPS2_getMetaCall();
void *beNDMWMcSlot_getMeta();
void fn_8034019C();
void beNDMWMcSlot_register();
void *beNDMWMcSlot_getMetaCall();
void beNDMWMcSlot_fieldInit();
}
extern "C" {
void fn_8034009C(){
 fn_80066188((int)beNDMWMcSlotPS2_register);
}
void beNDMWMcSlotPS2_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536600,(int)beNDMWMcSlot_register,(int)fn_8033FD10,(int)beNDMWMcSlotPS2_getMetaCall,(int)lbl_80454E58,24,(int)beNDMWMcSlotPS2_vtableRead,0,0,0);
}
void *beNDMWMcSlotPS2_getMetaCall(){return beNDMWMcSlotPS2_getMeta();}
void *beNDMWMcSlot_getMeta(){
 if(!lbl_80536604 || !(reinterpret_cast<unsigned int *>(lbl_80536604)[0x24/4]&4)) fn_8034019C();
 return lbl_80536604;
}
void fn_8034019C(){
 fn_80066188((int)beNDMWMcSlot_register);
}
void beNDMWMcSlot_register(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80536604,(int)igObject_register,(int)fn_800237D0,(int)beNDMWMcSlot_getMetaCall,(int)lbl_80454E68,24,0,(int)beNDMWMcSlot_fieldInit,0,0);
}
void *beNDMWMcSlot_getMetaCall(){return beNDMWMcSlot_getMeta();}
void beNDMWMcSlot_fieldInit(){
 void *meta=lbl_80536604;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E3904,0x5);
 fn_800659C0(meta,lbl_804E3918,lbl_804E392C,lbl_804E3940,field);
}
void *fn_803402D4(){
 if(!lbl_8053661C) lbl_8053661C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053661C;
}
void *beNDMWLoadSlotPlayerList_getMeta(){
 if(!lbl_8053661C || !(reinterpret_cast<unsigned int *>(lbl_8053661C)[0x24/4]&4)) fn_803403E8();
 return lbl_8053661C;
}
}
#pragma pop
