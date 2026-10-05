#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802BF580();
void fn_802BF5CC();
void fn_802BF71C();
extern char lbl_8041E1F8[];
extern char lbl_804CFD84[];
extern char lbl_805349A4[];
void fn_802BF680();
void *fn_802BF6FC();
}
extern "C" {
void fn_802BF658(){
 fn_80066188((int)fn_802BF680);
}
void fn_802BF680(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805349A4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802BF6FC,(int)lbl_8041E1F8,24,(int)fn_802BF5CC,(int)fn_802BF71C,0,(int)lbl_804CFD84);
}
void *fn_802BF6FC(){return fn_802BF580();}
}
#pragma pop
