#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusPowerSocket_getMeta();
void beNDMWStatusPowerSocket_vtableRead();
void beNDMWWindowCtrl_register();
void fn_80053650(void *,int);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802DC03C();
void fn_803250AC();
void *fn_8032B8A4();
void *fn_80332910();
void fn_803332B4();
void *fn_8034365C();
extern char lbl_80453BB8[];
extern char lbl_80453BD0[];
extern char lbl_804E1F1C[];
extern char lbl_804E1F28[];
extern char lbl_804E1F50[];
extern char lbl_804E1F78[];
extern char lbl_804E1FA0[];
extern char lbl_80535F38[];
extern void *lbl_80535F3C;
extern void *lbl_80535F68;
void beNDMWStatusPowerSocket_register();
void *beNDMWStatusPowerSocket_getMetaCall();
void *beNDMWStatusCtrlBaseEquip_getMeta();
void fn_80332E24();
void beNDMWStatusCtrlBaseEquip_register();
void *beNDMWStatusCtrlBaseEquip_getMetaCall();
void beNDMWStatusCtrlBaseEquip_fieldInit();
}
extern "C" {
void fn_80332D24(){
 fn_80066188((int)beNDMWStatusPowerSocket_register);
}
void beNDMWStatusPowerSocket_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535F38,(int)beNDMWStatusCtrlBaseEquip_register,(int)fn_80332910,(int)beNDMWStatusPowerSocket_getMetaCall,(int)lbl_80453BB8,124,(int)beNDMWStatusPowerSocket_vtableRead,0,0,0);
}
void *beNDMWStatusPowerSocket_getMetaCall(){return beNDMWStatusPowerSocket_getMeta();}
void *beNDMWStatusCtrlBaseEquip_getMeta(){
 if(!lbl_80535F3C || !(reinterpret_cast<unsigned int *>(lbl_80535F3C)[0x24/4]&4)) fn_80332E24();
 return lbl_80535F3C;
}
void fn_80332E24(){
 fn_80066188((int)beNDMWStatusCtrlBaseEquip_register);
}
void beNDMWStatusCtrlBaseEquip_register(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80535F3C,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusCtrlBaseEquip_getMetaCall,(int)lbl_80453BD0,124,0,(int)beNDMWStatusCtrlBaseEquip_fieldInit,0,(int)lbl_804E1F1C);
}
void *beNDMWStatusCtrlBaseEquip_getMetaCall(){return beNDMWStatusCtrlBaseEquip_getMeta();}
void beNDMWStatusCtrlBaseEquip_fieldInit(){
 void *value0=lbl_80535F3C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1F28,10);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80053650(value2,1);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value4=fn_802DC03C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value6=fn_8034365C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 void *value7=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value8=fn_8034365C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 void *value9=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+6));
 void *value10=fn_8034365C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 void *value11=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+7));
 void *value12=fn_8034365C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value11)+56)=value12;
 void *value13=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+8));
 void *value14=fn_8034365C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value13)+56)=value14;
 void *value15=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+9));
 void *value16=fn_8034365C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value15)+56)=value16;
 fn_800659C0(value0,lbl_804E1F50,lbl_804E1F78,lbl_804E1FA0,value1);
}
void *fn_80333028(void *object){
 fn_803332B4();
 return fn_8006546C(lbl_80535F68,object);
}
void *beNDMWStatusCtrlEquip_getMeta(){
 if(!lbl_80535F68 || !(reinterpret_cast<unsigned int *>(lbl_80535F68)[0x24/4]&4)) fn_803332B4();
 return lbl_80535F68;
}
}
#pragma pop
