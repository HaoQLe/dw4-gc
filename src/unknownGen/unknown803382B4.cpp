#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B381C();
void fn_802E3908();
void fn_803250AC();
void *fn_80338158();
void fn_803381A4();
void fn_80338378();
extern char lbl_804542C8[];
extern char lbl_804E26C8[];
extern char lbl_80536150[];
void fn_803382DC();
void *fn_80338358();
}
extern "C" {
void fn_803382B4(){
 fn_80066188((int)fn_803382DC);
}
void fn_803382DC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536150,(int)fn_802E3908,(int)fn_802B381C,(int)fn_80338358,(int)lbl_804542C8,36,(int)fn_803381A4,(int)fn_80338378,0,(int)lbl_804E26C8);
}
void *fn_80338358(){return fn_80338158();}
}
#pragma pop
