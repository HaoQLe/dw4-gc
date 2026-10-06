#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void fn_802CCED0();
void fn_802E3908();
extern char lbl_8041CA68[];
extern char lbl_8041F514[];
extern char lbl_804D1084[];
extern char lbl_804D1108[];
extern char lbl_804D118C[];
extern void *lbl_80534F48;
extern void *lbl_80534F4C;
void *fn_802CCDC4();
void fn_802CCE10();
void fn_802CCE38();
void *fn_802CCEB0();
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
}
#pragma pop
