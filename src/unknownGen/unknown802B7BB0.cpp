#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2E3C();
void *fn_802B79CC();
void fn_802B7A18();
void fn_802B7C74();
void fn_802E3D20();
extern char lbl_8041D5B4[];
extern char lbl_804CF430[];
extern char lbl_80534714[];
void fn_802B7BD8();
void *fn_802B7C54();
}
extern "C" {
void fn_802B7BB0(){
 fn_80066188((int)fn_802B7BD8);
}
void fn_802B7BD8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534714,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802B7C54,(int)lbl_8041D5B4,32,(int)fn_802B7A18,(int)fn_802B7C74,0,(int)lbl_804CF430);
}
void *fn_802B7C54(){return fn_802B79CC();}
}
#pragma pop
