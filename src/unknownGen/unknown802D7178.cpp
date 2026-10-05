#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2E3C();
void *fn_802D6F94();
void fn_802D6FE0();
void fn_802D723C();
void fn_802E3D20();
extern char lbl_80420028[];
extern char lbl_804D1D98[];
extern char lbl_80535288[];
void fn_802D71A0();
void *fn_802D721C();
}
extern "C" {
void fn_802D7178(){
 fn_80066188((int)fn_802D71A0);
}
void fn_802D71A0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535288,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802D721C,(int)lbl_80420028,32,(int)fn_802D6FE0,(int)fn_802D723C,0,(int)lbl_804D1D98);
}
void *fn_802D721C(){return fn_802D6F94();}
}
#pragma pop
