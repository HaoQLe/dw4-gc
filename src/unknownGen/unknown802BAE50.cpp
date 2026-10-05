#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802BACB4();
void fn_802BAD00();
void fn_802E3D20();
extern char lbl_8041D9F0[];
extern char lbl_805347F8[];
void fn_802BAE78();
void *fn_802BAEE4();
}
extern "C" {
void fn_802BAE50(){
 fn_80066188((int)fn_802BAE78);
}
void fn_802BAE78(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805347F8,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802BAEE4,(int)lbl_8041D9F0,28,(int)fn_802BAD00,0,0,0);
}
void *fn_802BAEE4(){return fn_802BACB4();}
}
#pragma pop
