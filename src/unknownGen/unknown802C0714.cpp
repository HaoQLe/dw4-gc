#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802C0520();
void fn_802C056C();
void fn_802C07D8();
extern char lbl_8041E2F8[];
extern char lbl_804CFE94[];
extern char lbl_80534A04[];
void fn_802C073C();
void *fn_802C07B8();
}
extern "C" {
void fn_802C0714(){
 fn_80066188((int)fn_802C073C);
}
void fn_802C073C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534A04,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802C07B8,(int)lbl_8041E2F8,68,(int)fn_802C056C,(int)fn_802C07D8,0,(int)lbl_804CFE94);
}
void *fn_802C07B8(){return fn_802C0520();}
}
#pragma pop
