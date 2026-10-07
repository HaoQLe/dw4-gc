#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802B7000();
void fn_802CD1F0();
void *fn_802D2484();
void fn_802E3908();
extern char lbl_8041CA68[];
extern char lbl_8041F514[];
extern char lbl_804D1084[];
extern char lbl_804D1108[];
extern char lbl_804D118C[];
extern char lbl_804D1198[];
extern char lbl_804D11A4[];
extern char lbl_804D11B0[];
extern char lbl_804D11BC[];
extern void *lbl_80534F48;
extern void *lbl_80534F4C;
extern void *lbl_80534F5C;
extern void *lbl_805621F4;
void *fn_802CCDC4();
void fn_802CCE10();
void fn_802CCE38();
void *fn_802CCEB0();
void fn_802CCED0();
}
extern "C" {
void *fn_802CCD64(){
 if(!lbl_80534F48) lbl_80534F48=fn_800635C8(lbl_8041CA68,lbl_804D1084,lbl_804D1108,0x21);
 return lbl_80534F48;
}
void *fn_802CCDC4(){
 if(!lbl_80534F4C || !(reinterpret_cast<unsigned int *>(lbl_80534F4C)[0x24/4]&4)) fn_802CCE10();
 return lbl_80534F4C;
}
void fn_802CCE10(){
 fn_80066188((int)fn_802CCE38);
}
void fn_802CCE38(){
 fn_802B1AC8();
 fn_80066204(1,(int)&lbl_80534F4C,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802CCEB0,(int)lbl_8041F514,44,0,(int)fn_802CCED0,0,(int)lbl_804D118C);
}
void *fn_802CCEB0(){return fn_802CCDC4();}
void fn_802CCED0(){
 void *value0=lbl_80534F4C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1198,3);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802D2484();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802B7000();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 fn_800659C0(value0,lbl_804D11A4,lbl_804D11B0,lbl_804D11BC,value1);
}
void *fn_802CCF98(){
 if(!lbl_80534F5C) lbl_80534F5C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534F5C;
}
void *fn_802CCFEC(){
 if(!lbl_80534F5C || !(reinterpret_cast<unsigned int *>(lbl_80534F5C)[0x24/4]&4)) fn_802CD1F0();
 return lbl_80534F5C;
}
}
#pragma pop
