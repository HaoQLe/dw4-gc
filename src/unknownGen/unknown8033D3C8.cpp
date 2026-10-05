#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_8033D2CC();
void fn_8033D318();
void fn_8033D48C();
extern char lbl_80454A0C[];
extern char lbl_804E3114[];
extern char lbl_805363E8[];
void fn_8033D3F0();
void *fn_8033D46C();
}
extern "C" {
void fn_8033D3C8(){
 fn_80066188((int)fn_8033D3F0);
}
void fn_8033D3F0(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805363E8,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_8033D46C,(int)lbl_80454A0C,92,(int)fn_8033D318,(int)fn_8033D48C,0,(int)lbl_804E3114);
}
void *fn_8033D46C(){return fn_8033D2CC();}
}
#pragma pop
