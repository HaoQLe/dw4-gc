#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
void *fn_802D308C();
void fn_802D30D8();
void fn_802E3284();
extern char lbl_8041FB70[];
extern char lbl_8053514C[];
void fn_802D319C();
void *fn_802D3208();
}
extern "C" {
void fn_802D3174(){
 fn_80066188((int)fn_802D319C);
}
void fn_802D319C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053514C,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_802D3208,(int)lbl_8041FB70,44,(int)fn_802D30D8,0,0,0);
}
void *fn_802D3208(){return fn_802D308C();}
}
#pragma pop
