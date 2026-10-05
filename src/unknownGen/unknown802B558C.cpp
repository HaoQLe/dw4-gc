#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AC8D0();
void *fn_801BC078();
void fn_802B1AC8();
void *fn_802B5290();
void fn_802B52DC();
void fn_802B5650();
extern char lbl_8041D2A4[];
extern char lbl_804CF0C4[];
extern char lbl_80534628[];
void fn_802B55B4();
void *fn_802B5630();
}
extern "C" {
void fn_802B558C(){
 fn_80066188((int)fn_802B55B4);
}
void fn_802B55B4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534628,(int)fn_801AC8D0,(int)fn_801BC078,(int)fn_802B5630,(int)lbl_8041D2A4,112,(int)fn_802B52DC,(int)fn_802B5650,0,(int)lbl_804CF0C4);
}
void *fn_802B5630(){return fn_802B5290();}
}
#pragma pop
