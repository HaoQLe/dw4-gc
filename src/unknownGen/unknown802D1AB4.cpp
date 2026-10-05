#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802D18D0();
void fn_802D191C();
void fn_802D1B78();
void fn_802E3D20();
extern char lbl_8041FAA4[];
extern char lbl_804D1828[];
extern char lbl_80535100[];
void fn_802D1ADC();
void *fn_802D1B58();
}
extern "C" {
void fn_802D1AB4(){
 fn_80066188((int)fn_802D1ADC);
}
void fn_802D1ADC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535100,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802D1B58,(int)lbl_8041FAA4,32,(int)fn_802D191C,(int)fn_802D1B78,0,(int)lbl_804D1828);
}
void *fn_802D1B58(){return fn_802D18D0();}
}
#pragma pop
