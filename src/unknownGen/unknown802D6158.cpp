#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802D5FBC();
void fn_802D6008();
void fn_802E3D20();
extern char lbl_8041FEFC[];
extern char lbl_80535244[];
void fn_802D6180();
void *fn_802D61EC();
}
extern "C" {
void fn_802D6158(){
 fn_80066188((int)fn_802D6180);
}
void fn_802D6180(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535244,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802D61EC,(int)lbl_8041FEFC,28,(int)fn_802D6008,0,0,0);
}
void *fn_802D61EC(){return fn_802D5FBC();}
}
#pragma pop
