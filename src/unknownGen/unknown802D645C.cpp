#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802D6300();
void fn_802D634C();
void fn_802E3908();
extern char lbl_8041FF50[];
extern char lbl_8053524C[];
void fn_802D6484();
void *fn_802D64F0();
}
extern "C" {
void fn_802D645C(){
 fn_80066188((int)fn_802D6484);
}
void fn_802D6484(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053524C,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802D64F0,(int)lbl_8041FF50,32,(int)fn_802D634C,0,0,0);
}
void *fn_802D64F0(){return fn_802D6300();}
}
#pragma pop
