#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2E3C();
void *fn_802B983C();
void fn_802B9888();
void fn_802B9B3C();
void fn_802E3D20();
extern char lbl_8041D884[];
extern char lbl_804CF664[];
extern char lbl_80534798[];
void fn_802B9AA0();
void *fn_802B9B1C();
}
extern "C" {
void fn_802B9A78(){
 fn_80066188((int)fn_802B9AA0);
}
void fn_802B9AA0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534798,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802B9B1C,(int)lbl_8041D884,40,(int)fn_802B9888,(int)fn_802B9B3C,0,(int)lbl_804CF664);
}
void *fn_802B9B1C(){return fn_802B983C();}
}
#pragma pop
