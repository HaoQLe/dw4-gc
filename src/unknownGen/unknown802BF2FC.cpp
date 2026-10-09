#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802BF658();
void *fn_802C0044();
void igObject_register();
extern char lbl_8041E170[];
extern char lbl_804CFCAC[];
extern char lbl_804CFCB4[];
extern char lbl_804CFCE8[];
extern char lbl_804CFD1C[];
extern char lbl_804CFD50[];
extern void *lbl_8053496C;
extern void *lbl_805349A4;
extern void *lbl_805621F4;
void *beSaveApi_getMeta();
void fn_802BF39C();
void beSaveApi_register();
void *beSaveApi_getMetaCall();
void beSaveApi_fieldInit();
}
extern "C" {
void *fn_802BF2FC(){
 if(!lbl_8053496C) lbl_8053496C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053496C;
}
void *beSaveApi_getMeta(){
 if(!lbl_8053496C || !(reinterpret_cast<unsigned int *>(lbl_8053496C)[0x24/4]&4)) fn_802BF39C();
 return lbl_8053496C;
}
void fn_802BF39C(){
 fn_80066188((int)beSaveApi_register);
}
void beSaveApi_register(){
 fn_802B1AC8();
 fn_80066204(1,(int)&lbl_8053496C,(int)igObject_register,(int)fn_800237D0,(int)beSaveApi_getMetaCall,(int)lbl_8041E170,212,0,(int)beSaveApi_fieldInit,0,(int)lbl_804CFCAC);
}
void *beSaveApi_getMetaCall(){return beSaveApi_getMeta();}
void beSaveApi_fieldInit(){
 void *value0=lbl_8053496C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CFCB4,13);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+10));
 void *value3=fn_802C0044();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+11));
 void *value5=fn_802C0044();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+12));
 void *value7=fn_802C0044();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 fn_800659C0(value0,lbl_804CFCE8,lbl_804CFD1C,lbl_804CFD50,value1);
}
void *fn_802BF52C(){
 if(!lbl_805349A4) lbl_805349A4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805349A4;
}
void *beSvPlatBaseData_getMeta(){
 if(!lbl_805349A4 || !(reinterpret_cast<unsigned int *>(lbl_805349A4)[0x24/4]&4)) fn_802BF658();
 return lbl_805349A4;
}
}
#pragma pop
