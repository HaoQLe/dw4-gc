#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802D5FBC();
void fn_802D6008();
void fn_802D645C();
void fn_802E3D20();
extern char lbl_8041CD10[];
extern char lbl_8041FEFC[];
extern char lbl_804D1CB8[];
extern char lbl_804D1CCC[];
extern char lbl_80535244[];
extern void *lbl_80535248;
extern void *lbl_8053524C;
extern void *lbl_805621F4;
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
void *fn_802D620C(){
 if(!lbl_80535248) lbl_80535248=fn_800635C8(lbl_8041CD10,lbl_804D1CB8,lbl_804D1CCC,0x5);
 return lbl_80535248;
}
void *fn_802D626C(void *object){
 fn_802D645C();
 return fn_8006546C(lbl_8053524C,object);
}
void *fn_802D62AC(){
 if(!lbl_8053524C) lbl_8053524C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053524C;
}
void *fn_802D6300(){
 if(!lbl_8053524C || !(reinterpret_cast<unsigned int *>(lbl_8053524C)[0x24/4]&4)) fn_802D645C();
 return lbl_8053524C;
}
}
#pragma pop
