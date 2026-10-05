#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284550();
void fn_80286F0C();
void fn_802B1AC8();
void *fn_802D24D8();
void fn_802D2524();
void fn_802D2768();
extern char lbl_8041FAFC[];
extern char lbl_804D1888[];
extern char lbl_80535124[];
void fn_802D26CC();
void *fn_802D2748();
}
extern "C" {
void fn_802D26A4(){
 fn_80066188((int)fn_802D26CC);
}
void fn_802D26CC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535124,(int)fn_80286F0C,(int)fn_80284550,(int)fn_802D2748,(int)lbl_8041FAFC,32,(int)fn_802D2524,(int)fn_802D2768,0,(int)lbl_804D1888);
}
void *fn_802D2748(){return fn_802D24D8();}
}
#pragma pop
