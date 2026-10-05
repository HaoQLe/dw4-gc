#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010F4FC();
void fn_80112DF0();
void fn_802B1AC8();
void *fn_802D42AC();
void fn_802D42F8();
void fn_802D4454();
extern char lbl_8041FCAC[];
extern char lbl_804D1A58[];
extern char lbl_805351A0[];
void fn_802D43B8();
void *fn_802D4434();
}
extern "C" {
void fn_802D4390(){
 fn_80066188((int)fn_802D43B8);
}
void fn_802D43B8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805351A0,(int)fn_80112DF0,(int)fn_8010F4FC,(int)fn_802D4434,(int)lbl_8041FCAC,12,(int)fn_802D42F8,(int)fn_802D4454,0,(int)lbl_804D1A58);
}
void *fn_802D4434(){return fn_802D42AC();}
}
#pragma pop
