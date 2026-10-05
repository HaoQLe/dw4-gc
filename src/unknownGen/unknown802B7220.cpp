#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80286F0C();
void fn_802B1AC8();
void *fn_802B7054();
void fn_802B70A0();
void fn_802B72E4();
extern char lbl_8041D404[];
extern char lbl_804CF238[];
extern char lbl_80534698[];
void fn_802B7248();
void *fn_802B72C4();
}
extern "C" {
void fn_802B7220(){
 fn_80066188((int)fn_802B7248);
}
void fn_802B7248(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534698,(int)fn_80286F0C,(int)fn_80284550,(int)fn_802B72C4,(int)lbl_8041D404,28,(int)fn_802B70A0,(int)fn_802B72E4,0,(int)lbl_804CF238);
}
void *fn_802B72C4(){return fn_802B7054();}
}
#pragma pop
