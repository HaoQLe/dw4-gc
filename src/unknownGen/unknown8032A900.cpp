#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80325C6C();
void fn_803287A8();
void *fn_8032A8B4();
void fn_8032A9C0();
extern char lbl_80453658[];
extern char lbl_804E19F0[];
extern char lbl_80535DA0[];
void fn_8032A928();
void *fn_8032A9A0();
}
extern "C" {
void fn_8032A900(){
 fn_80066188((int)fn_8032A928);
}
void fn_8032A928(){
 fn_803250AC();
 fn_80066204(1,(int)lbl_80535DA0,(int)fn_80325C6C,(int)fn_803287A8,(int)fn_8032A9A0,(int)lbl_80453658,112,0,(int)fn_8032A9C0,0,(int)lbl_804E19F0);
}
void *fn_8032A9A0(){return fn_8032A8B4();}
}
#pragma pop
