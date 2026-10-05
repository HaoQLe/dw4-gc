#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B3464();
void fn_802B34B0();
void fn_802B381C();
void fn_802B382C();
void fn_802E3908();
extern char lbl_8041CA74[];
extern char lbl_804CEE00[];
extern char lbl_8053455C[];
void fn_802B3780();
void *fn_802B37FC();
}
extern "C" {
void fn_802B3758(){
 fn_80066188((int)fn_802B3780);
}
void fn_802B3780(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053455C,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802B37FC,(int)lbl_8041CA74,36,(int)fn_802B34B0,(int)fn_802B382C,0,(int)lbl_804CEE00);
}
void *fn_802B37FC(){return fn_802B3464();}
}
#pragma pop
