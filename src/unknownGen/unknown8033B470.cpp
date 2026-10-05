#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802CCE38();
void fn_803250AC();
void fn_803386E8();
void *fn_8033B300();
void fn_8033B34C();
extern char lbl_8045476C[];
extern char lbl_80536230[];
void fn_8033B498();
void *fn_8033B504();
}
extern "C" {
void fn_8033B470(){
 fn_80066188((int)fn_8033B498);
}
void fn_8033B498(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536230,(int)fn_802CCE38,(int)fn_803386E8,(int)fn_8033B504,(int)lbl_8045476C,44,(int)fn_8033B34C,0,0,0);
}
void *fn_8033B504(){return fn_8033B300();}
}
#pragma pop
