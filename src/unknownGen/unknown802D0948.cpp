#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D0888();
void fn_802D08D4();
extern char lbl_8041F95C[];
extern char lbl_804D16CC[];
extern char lbl_805350A4[];
void fn_802D0970();
void *fn_802D09E4();
}
extern "C" {
void fn_802D0948(){
 fn_80066188((int)fn_802D0970);
}
void fn_802D0970(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805350A4,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D09E4,(int)lbl_8041F95C,20,(int)fn_802D08D4,0,0,(int)lbl_804D16CC);
}
void *fn_802D09E4(){return fn_802D0888();}
}
#pragma pop
