#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802BFAE8();
void *fn_802BFC4C();
void fn_802BFC98();
void fn_802BFDEC();
void fn_802BFEF4();
extern char lbl_8041E244[];
extern char lbl_805349C4[];
void fn_802BFD58();
void *fn_802BFDCC();
}
extern "C" {
void fn_802BFD30(){
 fn_80066188((int)fn_802BFD58);
}
void fn_802BFD58(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805349C4,(int)fn_802BFEF4,(int)fn_802BFAE8,(int)fn_802BFDCC,(int)lbl_8041E244,56,(int)fn_802BFC98,(int)fn_802BFDEC,0,0);
}
void *fn_802BFDCC(){return fn_802BFC4C();}
}
#pragma pop
