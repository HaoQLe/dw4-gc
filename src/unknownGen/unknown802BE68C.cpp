#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802BD764();
void *fn_802BE484();
void fn_802BE4D0();
void fn_802BE750();
void fn_802BF3C4();
extern char lbl_8041DFE8[];
extern char lbl_804CFC20[];
extern char lbl_8053493C[];
void fn_802BE6B4();
void *fn_802BE730();
}
extern "C" {
void fn_802BE68C(){
 fn_80066188((int)fn_802BE6B4);
}
void fn_802BE6B4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053493C,(int)fn_802BF3C4,(int)fn_802BD764,(int)fn_802BE730,(int)lbl_8041DFE8,236,(int)fn_802BE4D0,(int)fn_802BE750,0,(int)lbl_804CFC20);
}
void *fn_802BE730(){return fn_802BE484();}
}
#pragma pop
