#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802BD764();
void *fn_802BDE14();
void fn_802BDE60();
void fn_802BE038();
void fn_802BF3C4();
extern char lbl_8041DF80[];
extern char lbl_80534920[];
void fn_802BDFA4();
void *fn_802BE018();
}
extern "C" {
void fn_802BDF7C(){
 fn_80066188((int)fn_802BDFA4);
}
void fn_802BDFA4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534920,(int)fn_802BF3C4,(int)fn_802BD764,(int)fn_802BE018,(int)lbl_8041DF80,224,(int)fn_802BDE60,(int)fn_802BE038,0,0);
}
void *fn_802BE018(){return fn_802BDE14();}
}
#pragma pop
