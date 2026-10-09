#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void *fn_800365B4();
void *fn_800635C8(void *,void *,void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
void fn_803397EC();
extern char lbl_80454460[];
extern char lbl_804544CC[];
extern char lbl_804545A0[];
extern char lbl_804545AC[];
extern char lbl_804E27B8[];
extern char lbl_804E27D8[];
extern char lbl_804E27F8[];
extern char lbl_804E2818[];
extern char lbl_804E2838[];
extern char lbl_804E2860[];
extern char lbl_804E2888[];
extern char lbl_804E28B4[];
extern char lbl_804E28E0[];
extern char lbl_804E2920[];
extern void *lbl_80536188;
extern void *lbl_805361AC;
extern void *lbl_805361B0;
extern void *lbl_805361B4;
extern void *lbl_805361B8;
extern void *lbl_805361BC;
void *beNDMWMdlPEBase_getMeta();
void fn_803396A0();
void beNDMWMdlPEBase_register();
void *beNDMWMdlPEBase_getMetaCall();
}
extern "C" {
void beNDMWMdlPlayerInfoWork_fieldInit(){
 void *value0=lbl_80536188;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E27B8,8);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804E27D8,lbl_804E27F8,lbl_804E2818,value1);
}
void *fn_80339534(){
 if(!lbl_805361AC) lbl_805361AC=fn_800635C8(lbl_80454460,lbl_804E2838,lbl_804E2860,0xA);
 return lbl_805361AC;
}
void *fn_80339594(){
 if(!lbl_805361B0) lbl_805361B0=fn_800635C8(lbl_804544CC,lbl_804E2888,lbl_804E28B4,0xB);
 return lbl_805361B0;
}
void *fn_803395F4(){
 if(!lbl_805361B4) lbl_805361B4=fn_800635C8(lbl_804545A0,lbl_804E28E0,lbl_804E2920,0x10);
 return lbl_805361B4;
}
void *beNDMWMdlPEBase_getMeta(){
 if(!lbl_805361B8 || !(reinterpret_cast<unsigned int *>(lbl_805361B8)[0x24/4]&4)) fn_803396A0();
 return lbl_805361B8;
}
void fn_803396A0(){
 fn_80066188((int)beNDMWMdlPEBase_register);
}
void beNDMWMdlPEBase_register(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_805361B8,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlPEBase_getMetaCall,(int)lbl_804545AC,44,0,0,0,0);
}
void *beNDMWMdlPEBase_getMetaCall(){return beNDMWMdlPEBase_getMeta();}
void *beNDMWMdlPEBaseInfoWork_getMeta(){
 if(!lbl_805361BC || !(reinterpret_cast<unsigned int *>(lbl_805361BC)[0x24/4]&4)) fn_803397EC();
 return lbl_805361BC;
}
}
#pragma pop
