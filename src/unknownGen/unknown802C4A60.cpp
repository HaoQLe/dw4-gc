#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2E3C();
void *fn_802C48C4();
void fn_802C4910();
void fn_802E3D20();
extern char lbl_8041E8E0[];
extern char lbl_80534BCC[];
void fn_802C4A88();
void *fn_802C4AF4();
}
extern "C" {
void fn_802C4A60(){
 fn_80066188((int)fn_802C4A88);
}
void fn_802C4A88(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534BCC,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802C4AF4,(int)lbl_8041E8E0,28,(int)fn_802C4910,0,0,0);
}
void *fn_802C4AF4(){return fn_802C48C4();}
}
#pragma pop
