#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802DAE34();
void fn_802DAE80();
void fn_802DAFD0();
extern char lbl_804204D4[];
extern char lbl_804D22C8[];
extern char lbl_805353DC[];
void fn_802DAF34();
void *fn_802DAFB0();
}
extern "C" {
void fn_802DAF0C(){
 fn_80066188((int)fn_802DAF34);
}
void fn_802DAF34(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805353DC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802DAFB0,(int)lbl_804204D4,12,(int)fn_802DAE80,(int)fn_802DAFD0,0,(int)lbl_804D22C8);
}
void *fn_802DAFB0(){return fn_802DAE34();}
}
#pragma pop
