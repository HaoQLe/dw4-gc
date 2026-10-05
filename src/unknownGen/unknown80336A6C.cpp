#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2B2C();
void fn_802E3284();
void fn_803250AC();
void *fn_803368C8();
void fn_80336914();
void fn_80336B30();
extern char lbl_804540A0[];
extern char lbl_804E23DC[];
extern char lbl_8053609C[];
void fn_80336A94();
void *fn_80336B10();
}
extern "C" {
void fn_80336A6C(){
 fn_80066188((int)fn_80336A94);
}
void fn_80336A94(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053609C,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_80336B10,(int)lbl_804540A0,48,(int)fn_80336914,(int)fn_80336B30,0,(int)lbl_804E23DC);
}
void *fn_80336B10(){return fn_803368C8();}
}
#pragma pop
