#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AC8D0();
void *fn_801BC078();
void fn_802B1AC8();
void *fn_802E07E4();
void fn_802E0830();
void fn_802E0BA8();
void *fn_802E0C48();
extern char lbl_80420A1C[];
extern char lbl_804D2940[];
extern char lbl_805355C4[];
void fn_802E0B08();
void *fn_802E0B88();
}
extern "C" {
void fn_802E0AE0(){
 fn_80066188((int)fn_802E0B08);
}
void fn_802E0B08(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805355C4,(int)fn_801AC8D0,(int)fn_801BC078,(int)fn_802E0B88,(int)lbl_80420A1C,112,(int)fn_802E0830,(int)fn_802E0BA8,(int)fn_802E0C48,(int)lbl_804D2940);
}
void *fn_802E0B88(){return fn_802E07E4();}
}
#pragma pop
