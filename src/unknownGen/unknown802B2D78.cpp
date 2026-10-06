#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B3C();
void fn_802B2B88();
void fn_802B2E4C();
void fn_802E3D20();
extern char lbl_8041C9E0[];
extern char lbl_804CED90[];
extern char lbl_8053453C[];
extern void *lbl_8053570C;
void fn_802B2DA0();
void *fn_802B2E1C();
void *fn_802B2E3C();
}
extern "C" {
void fn_802B2D78(){
 fn_80066188((int)fn_802B2DA0);
}
void fn_802B2DA0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053453C,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802B2E1C,(int)lbl_8041C9E0,40,(int)fn_802B2B88,(int)fn_802B2E4C,0,(int)lbl_804CED90);
}
void *fn_802B2E1C(){return fn_802B2B3C();}
void *fn_802B2E3C(){return lbl_8053570C;}
}
#pragma pop
