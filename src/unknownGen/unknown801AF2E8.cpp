#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801AF1AC();
void fn_801AF1E8();
void fn_801AF3A8();
extern char lbl_804AC740[];
extern char lbl_804AC74C[];
extern void *lbl_80564864;
void fn_801AF310();
void *fn_801AF388();
}
extern "C" {
void fn_801AF2E8(){
 fn_80066188((int)fn_801AF310);
}
void fn_801AF310(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564864,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801AF388,(int)lbl_804AC74C,32,(int)fn_801AF1E8,(int)fn_801AF3A8,0,(int)lbl_804AC740);
}
void *fn_801AF388(){return fn_801AF1AC();}
}
#pragma pop
