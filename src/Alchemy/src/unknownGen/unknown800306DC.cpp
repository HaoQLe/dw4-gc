#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002942C();
void *fn_80030570();
void fn_800305AC();
void fn_80030798();
void fn_80032D80();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80465F8C[];
extern char lbl_8055D4AC[8];
extern void *lbl_80561B70;
void fn_80030704();
void *fn_80030778();
}
extern "C" {
void fn_800306DC(){
 fn_80066188((int)fn_80030704);
}
void fn_80030704(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561B70,(int)fn_80032D80,(int)fn_8002942C,(int)fn_80030778,(int)lbl_80465F8C,52,(int)fn_800305AC,(int)fn_80030798,0,(int)lbl_8055D4AC);
}
void *fn_80030778(){return fn_80030570();}
}
#pragma pop
