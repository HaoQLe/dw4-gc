#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800AE214();
void fn_800AE250();
void fn_800AE368();
extern char lbl_804781C8[];
extern void *lbl_805624E8;
void fn_800AE2D8();
void *fn_800AE348();
}
extern "C" {
void fn_800AE2B0(){
 fn_80066188((int)fn_800AE2D8);
}
void fn_800AE2D8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624E8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AE348,(int)lbl_804781C8,84,(int)fn_800AE250,(int)fn_800AE368,0,0);
}
void *fn_800AE348(){return fn_800AE214();}
}
#pragma pop
