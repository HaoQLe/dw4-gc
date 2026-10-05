#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284294();
void fn_80284E44();
void *fn_802857F8();
void fn_80285844();
void fn_802859A0();
void fn_802859B0();
extern char lbl_80416AA0[];
extern char lbl_804CB0E8[];
extern char lbl_80515CB0[];
void fn_80285904();
void *fn_80285980();
}
extern "C" {
void fn_802858DC(){
 fn_80066188((int)fn_80285904);
}
void fn_80285904(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515CB0,(int)fn_80284E44,(int)fn_802859A0,(int)fn_80285980,(int)lbl_80416AA0,24,(int)fn_80285844,(int)fn_802859B0,0,(int)lbl_804CB0E8);
}
void *fn_80285980(){return fn_802857F8();}
}
#pragma pop
