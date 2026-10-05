#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802BD764();
void *fn_802BDAE4();
void fn_802BDB30();
void fn_802BDD08();
void fn_802BF3C4();
extern char lbl_8041DF70[];
extern char lbl_80534918[];
void fn_802BDC74();
void *fn_802BDCE8();
}
extern "C" {
void fn_802BDC4C(){
 fn_80066188((int)fn_802BDC74);
}
void fn_802BDC74(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534918,(int)fn_802BF3C4,(int)fn_802BD764,(int)fn_802BDCE8,(int)lbl_8041DF70,212,(int)fn_802BDB30,(int)fn_802BDD08,0,0);
}
void *fn_802BDCE8(){return fn_802BDAE4();}
}
#pragma pop
