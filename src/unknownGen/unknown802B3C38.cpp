#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802B3B1C();
void fn_802B3B68();
void fn_802B3CFC();
extern char lbl_8041CAA8[];
extern char lbl_804CEE20[];
extern char lbl_80534568[];
void fn_802B3C60();
void *fn_802B3CDC();
}
extern "C" {
void fn_802B3C38(){
 fn_80066188((int)fn_802B3C60);
}
void fn_802B3C60(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534568,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802B3CDC,(int)lbl_8041CAA8,16,(int)fn_802B3B68,(int)fn_802B3CFC,0,(int)lbl_804CEE20);
}
void *fn_802B3CDC(){return fn_802B3B1C();}
}
#pragma pop
