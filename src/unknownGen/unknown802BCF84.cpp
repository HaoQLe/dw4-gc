#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802BCEF0();
void fn_802BCF3C();
void fn_802BD040();
extern char lbl_8041DDE4[];
extern char lbl_805348C4[];
void fn_802BCFAC();
void *fn_802BD020();
}
extern "C" {
void fn_802BCF84(){
 fn_80066188((int)fn_802BCFAC);
}
void fn_802BCFAC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805348C4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802BD020,(int)lbl_8041DDE4,16,(int)fn_802BCF3C,(int)fn_802BD040,0,0);
}
void *fn_802BD020(){return fn_802BCEF0();}
}
#pragma pop
