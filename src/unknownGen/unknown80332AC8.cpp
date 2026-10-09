#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWStatusCtrlBaseEquip_register();
void *beNDMWStatusMainSlot_getMeta();
void beNDMWStatusMainSlot_vtableRead();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80332910();
void fn_80332D24();
extern char lbl_80453BA0[];
extern char lbl_80535F34[];
extern void *lbl_80535F38;
void beNDMWStatusMainSlot_register();
void *beNDMWStatusMainSlot_getMetaCall();
}
extern "C" {
void fn_80332AC8(){
 fn_80066188((int)beNDMWStatusMainSlot_register);
}
void beNDMWStatusMainSlot_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535F34,(int)beNDMWStatusCtrlBaseEquip_register,(int)fn_80332910,(int)beNDMWStatusMainSlot_getMetaCall,(int)lbl_80453BA0,124,(int)beNDMWStatusMainSlot_vtableRead,0,0,0);
}
void *beNDMWStatusMainSlot_getMetaCall(){return beNDMWStatusMainSlot_getMeta();}
void *fn_80332B7C(void *object){
 fn_80332D24();
 return fn_8006546C(lbl_80535F38,object);
}
void *beNDMWStatusPowerSocket_getMeta(){
 if(!lbl_80535F38 || !(reinterpret_cast<unsigned int *>(lbl_80535F38)[0x24/4]&4)) fn_80332D24();
 return lbl_80535F38;
}
}
#pragma pop
