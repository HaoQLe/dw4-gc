#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802BD764();
void *fn_802BD7B4();
void fn_802BD800();
void fn_802BD9D8();
void fn_802BF3C4();
extern char lbl_8041DF58[];
extern char lbl_80534910[];
void fn_802BD944();
void *fn_802BD9B8();
}
extern "C" {
void fn_802BD91C(){
 fn_80066188((int)fn_802BD944);
}
void fn_802BD944(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534910,(int)fn_802BF3C4,(int)fn_802BD764,(int)fn_802BD9B8,(int)lbl_8041DF58,212,(int)fn_802BD800,(int)fn_802BD9D8,0,0);
}
void *fn_802BD9B8(){return fn_802BD7B4();}
}
#pragma pop
