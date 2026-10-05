#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
void *fn_802C9164();
void fn_802C91B0();
void fn_802C9374();
void fn_802E40FC();
extern char lbl_8041EFDC[];
extern char lbl_804D0D2C[];
extern char lbl_80534E08[];
void fn_802C92D8();
void *fn_802C9354();
}
extern "C" {
void fn_802C92B0(){
 fn_80066188((int)fn_802C92D8);
}
void fn_802C92D8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534E08,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_802C9354,(int)lbl_8041EFDC,20,(int)fn_802C91B0,(int)fn_802C9374,0,(int)lbl_804D0D2C);
}
void *fn_802C9354(){return fn_802C9164();}
}
#pragma pop
