#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BC428();
void *fn_802BD0E0();
void fn_802BD12C();
void fn_802BD2CC();
void fn_802BF680();
extern char lbl_8041DEA4[];
extern char lbl_805348D0[];
void fn_802BD238();
void *fn_802BD2AC();
}
extern "C" {
void fn_802BD210(){
 fn_80066188((int)fn_802BD238);
}
void fn_802BD238(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805348D0,(int)fn_802BF680,(int)fn_802BC428,(int)fn_802BD2AC,(int)lbl_8041DEA4,140,(int)fn_802BD12C,(int)fn_802BD2CC,0,0);
}
void *fn_802BD2AC(){return fn_802BD0E0();}
}
#pragma pop
