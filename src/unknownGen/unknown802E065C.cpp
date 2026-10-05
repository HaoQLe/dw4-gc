#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AC8D0();
void *fn_801BC078();
void fn_802B1AC8();
void *fn_802E0360();
void fn_802E03AC();
void fn_802E0724();
void *fn_802E07C4();
extern char lbl_804209FC[];
extern char lbl_804D2928[];
extern char lbl_805355BC[];
void fn_802E0684();
void *fn_802E0704();
}
extern "C" {
void fn_802E065C(){
 fn_80066188((int)fn_802E0684);
}
void fn_802E0684(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805355BC,(int)fn_801AC8D0,(int)fn_801BC078,(int)fn_802E0704,(int)lbl_804209FC,112,(int)fn_802E03AC,(int)fn_802E0724,(int)fn_802E07C4,(int)lbl_804D2928);
}
void *fn_802E0704(){return fn_802E0360();}
}
#pragma pop
