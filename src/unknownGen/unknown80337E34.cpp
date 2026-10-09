#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024B94();
void *fn_80029E64(void *);
void *fn_800365B4();
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802CDF04();
void *fn_802DC03C();
void *fn_802E3840();
void fn_803250AC();
void fn_803382B4();
void igObject_register();
extern char lbl_80453438[];
extern char lbl_804541C0[];
extern char lbl_804E2558[];
extern char lbl_804E2570[];
extern char lbl_804E25B0[];
extern char lbl_804E25F0[];
extern char lbl_804E2630[];
extern char lbl_804E2670[];
extern char lbl_804E269C[];
extern void *lbl_80536108;
extern void *lbl_8053614C;
extern void *lbl_80536150;
extern void *lbl_805621F4;
void *beNDMWPanelObject_getMeta();
void fn_80337E80();
void beNDMWPanelObject_register();
void *beNDMWPanelObject_getMetaCall();
void beNDMWPanelObject_fieldInit();
}
extern "C" {
void *beNDMWPanelObject_getMeta(){
 if(!lbl_80536108 || !(reinterpret_cast<unsigned int *>(lbl_80536108)[0x24/4]&4)) fn_80337E80();
 return lbl_80536108;
}
void fn_80337E80(){
 fn_80066188((int)beNDMWPanelObject_register);
}
void beNDMWPanelObject_register(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80536108,(int)igObject_register,(int)fn_800237D0,(int)beNDMWPanelObject_getMetaCall,(int)lbl_804541C0,60,0,(int)beNDMWPanelObject_fieldInit,0,(int)lbl_804E2558);
}
void *beNDMWPanelObject_getMetaCall(){return beNDMWPanelObject_getMeta();}
void beNDMWPanelObject_fieldInit(){
 void *value0=lbl_80536108;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E2570,16);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802E3840();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802CDF04();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+6));
 fn_80053650(value6,2);
 void *value7=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+7));
 void *value8=fn_802DC03C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 void *value9=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+12));
 void *value10=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 void *value11=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+13));
 void *value12=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value11)+56)=value12;
 fn_800659C0(value0,lbl_804E25B0,lbl_804E25F0,lbl_804E2630,value1);
}
void *fn_80338064(){
 if(!lbl_8053614C) lbl_8053614C=fn_800635C8(lbl_80453438,lbl_804E2670,lbl_804E269C,0xB);
 return lbl_8053614C;
}
void *fn_803380C4(void *object){
 fn_803382B4();
 return fn_8006546C(lbl_80536150,object);
}
void *fn_80338104(){
 if(!lbl_80536150) lbl_80536150=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536150;
}
void *beNDMWPanelWaza_getMeta(){
 if(!lbl_80536150 || !(reinterpret_cast<unsigned int *>(lbl_80536150)[0x24/4]&4)) fn_803382B4();
 return lbl_80536150;
}
}
#pragma pop
