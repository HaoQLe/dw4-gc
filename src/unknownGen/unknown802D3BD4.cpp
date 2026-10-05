#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802D3A30();
void fn_802D3A7C();
void fn_802D3C98();
void fn_802E3908();
extern char lbl_8041FC14[];
extern char lbl_804D197C[];
extern char lbl_80535168[];
void fn_802D3BFC();
void *fn_802D3C78();
}
extern "C" {
void fn_802D3BD4(){
 fn_80066188((int)fn_802D3BFC);
}
void fn_802D3BFC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535168,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802D3C78,(int)lbl_8041FC14,40,(int)fn_802D3A7C,(int)fn_802D3C98,0,(int)lbl_804D197C);
}
void *fn_802D3C78(){return fn_802D3A30();}
}
#pragma pop
