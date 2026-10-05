#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CB7CC();
void fn_802CB818();
void fn_802CB970();
extern char lbl_8041F29C[];
extern char lbl_80534EF0[];
void fn_802CB8DC();
void *fn_802CB950();
}
extern "C" {
void fn_802CB8B4(){
 fn_80066188((int)fn_802CB8DC);
}
void fn_802CB8DC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534EF0,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CB950,(int)lbl_8041F29C,36,(int)fn_802CB818,(int)fn_802CB970,0,0);
}
void *fn_802CB950(){return fn_802CB7CC();}
}
#pragma pop
