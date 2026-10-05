#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802B6D18();
void fn_802B6D64();
void fn_802B6EF8();
extern char lbl_8041D3D0[];
extern char lbl_804CF210[];
extern char lbl_8053468C[];
void fn_802B6E5C();
void *fn_802B6ED8();
}
extern "C" {
void fn_802B6E34(){
 fn_80066188((int)fn_802B6E5C);
}
void fn_802B6E5C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053468C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802B6ED8,(int)lbl_8041D3D0,16,(int)fn_802B6D64,(int)fn_802B6EF8,0,(int)lbl_804CF210);
}
void *fn_802B6ED8(){return fn_802B6D18();}
}
#pragma pop
