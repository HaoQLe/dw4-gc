#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusSelect00_getMeta();
void beNDMWStatusSelect00_vtableRead();
void beNDMWWindow_register();
void *fn_80036C40();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803287A8();
void *fn_80328C10();
void fn_8032ABFC();
extern char lbl_80453640[];
extern char lbl_80453658[];
extern char lbl_804E19F0[];
extern char lbl_804E19F8[];
extern char lbl_804E1A10[];
extern char lbl_804E1A28[];
extern char lbl_804E1A40[];
extern char lbl_80535D9C[];
extern void *lbl_80535DA0;
extern void *lbl_80535DBC;
void beNDMWStatusSelect00_register();
void *beNDMWStatusSelect00_getMetaCall();
void *beNDMWWindowSelect_getMeta();
void fn_8032A900();
void beNDMWWindowSelect_register();
void *beNDMWWindowSelect_getMetaCall();
void beNDMWWindowSelect_fieldInit();
}
extern "C" {
void fn_8032A800(){
 fn_80066188((int)beNDMWStatusSelect00_register);
}
void beNDMWStatusSelect00_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D9C,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWStatusSelect00_getMetaCall,(int)lbl_80453640,112,(int)beNDMWStatusSelect00_vtableRead,0,0,0);
}
void *beNDMWStatusSelect00_getMetaCall(){return beNDMWStatusSelect00_getMeta();}
void *beNDMWWindowSelect_getMeta(){
 if(!lbl_80535DA0 || !(reinterpret_cast<unsigned int *>(lbl_80535DA0)[0x24/4]&4)) fn_8032A900();
 return lbl_80535DA0;
}
void fn_8032A900(){
 fn_80066188((int)beNDMWWindowSelect_register);
}
void beNDMWWindowSelect_register(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80535DA0,(int)beNDMWWindow_register,(int)fn_803287A8,(int)beNDMWWindowSelect_getMetaCall,(int)lbl_80453658,112,0,(int)beNDMWWindowSelect_fieldInit,0,(int)lbl_804E19F0);
}
void *beNDMWWindowSelect_getMetaCall(){return beNDMWWindowSelect_getMeta();}
void beNDMWWindowSelect_fieldInit(){
 void *value0=lbl_80535DA0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E19F8,6);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value3=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804E1A10,lbl_804E1A28,lbl_804E1A40,value1);
}
void *beNDMWStatusInfo_getMeta(){
 if(!lbl_80535DBC || !(reinterpret_cast<unsigned int *>(lbl_80535DBC)[0x24/4]&4)) fn_8032ABFC();
 return lbl_80535DBC;
}
}
#pragma pop
