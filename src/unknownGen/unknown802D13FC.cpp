#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B381C();
void *fn_802D1218();
void fn_802D1264();
void fn_802D14C0();
void fn_802E3908();
extern char lbl_8041FA10[];
extern char lbl_804D177C[];
extern char lbl_805350D0[];
void fn_802D1424();
void *fn_802D14A0();
}
extern "C" {
void fn_802D13FC(){
 fn_80066188((int)fn_802D1424);
}
void fn_802D1424(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805350D0,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802D14A0,(int)lbl_8041FA10,68,(int)fn_802D1264,(int)fn_802D14C0,0,(int)lbl_804D177C);
}
void *fn_802D14A0(){return fn_802D1218();}
}
#pragma pop
