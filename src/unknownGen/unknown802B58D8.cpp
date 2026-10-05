#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80286F0C();
void fn_802B1AC8();
void *fn_802B578C();
void fn_802B57D8();
void fn_802B599C();
extern char lbl_8041D2C8[];
extern char lbl_804CF0DC[];
extern char lbl_80534630[];
void fn_802B5900();
void *fn_802B597C();
}
extern "C" {
void fn_802B58D8(){
 fn_80066188((int)fn_802B5900);
}
void fn_802B5900(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534630,(int)fn_80286F0C,(int)fn_80284550,(int)fn_802B597C,(int)lbl_8041D2C8,40,(int)fn_802B57D8,(int)fn_802B599C,0,(int)lbl_804CF0DC);
}
void *fn_802B597C(){return fn_802B578C();}
}
#pragma pop
