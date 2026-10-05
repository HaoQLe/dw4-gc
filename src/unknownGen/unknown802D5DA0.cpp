#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
void *fn_802D5C70();
void fn_802D5CBC();
void fn_802D5E64();
void fn_802E3284();
extern char lbl_8041FE8C[];
extern char lbl_804D1C20[];
extern char lbl_8053521C[];
void fn_802D5DC8();
void *fn_802D5E44();
}
extern "C" {
void fn_802D5DA0(){
 fn_80066188((int)fn_802D5DC8);
}
void fn_802D5DC8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053521C,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_802D5E44,(int)lbl_8041FE8C,104,(int)fn_802D5CBC,(int)fn_802D5E64,0,(int)lbl_804D1C20);
}
void *fn_802D5E44(){return fn_802D5C70();}
}
#pragma pop
