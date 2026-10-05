#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802E11E0();
void fn_802E122C();
void fn_802E13F8();
void fn_802E3908();
extern char lbl_80420A74[];
extern char lbl_805355D8[];
void fn_802E1364();
void *fn_802E13D8();
}
extern "C" {
void fn_802E133C(){
 fn_80066188((int)fn_802E1364);
}
void fn_802E1364(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805355D8,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802E13D8,(int)lbl_80420A74,44,(int)fn_802E122C,(int)fn_802E13F8,0,0);
}
void *fn_802E13D8(){return fn_802E11E0();}
}
#pragma pop
