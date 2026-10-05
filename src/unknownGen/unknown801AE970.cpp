#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801AE370();
void fn_801AE3AC();
void fn_801AEA30();
extern char lbl_804AC204[];
extern char lbl_804AC22C[];
extern void *lbl_805647C8;
void fn_801AE998();
void *fn_801AEA10();
}
extern "C" {
void fn_801AE970(){
 fn_80066188((int)fn_801AE998);
}
void fn_801AE998(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805647C8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801AEA10,(int)lbl_804AC22C,132,(int)fn_801AE3AC,(int)fn_801AEA30,0,(int)lbl_804AC204);
}
void *fn_801AEA10(){return fn_801AE370();}
}
#pragma pop
