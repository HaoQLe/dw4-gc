#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
void *fn_802B8B88();
void fn_802B8BD4();
void fn_802B8D40();
void fn_802E40FC();
extern char lbl_8041D694[];
extern char lbl_80534754[];
void fn_802B8CAC();
void *fn_802B8D20();
}
extern "C" {
void fn_802B8C84(){
 fn_80066188((int)fn_802B8CAC);
}
void fn_802B8CAC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534754,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_802B8D20,(int)lbl_8041D694,32,(int)fn_802B8BD4,(int)fn_802B8D40,0,0);
}
void *fn_802B8D20(){return fn_802B8B88();}
}
#pragma pop
