#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802E2CC8();
void fn_802E2D14();
void fn_802E2EE0();
void fn_802E3908();
extern char lbl_80420CE4[];
extern char lbl_805356A0[];
void fn_802E2E4C();
void *fn_802E2EC0();
}
extern "C" {
void fn_802E2E24(){
 fn_80066188((int)fn_802E2E4C);
}
void fn_802E2E4C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805356A0,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802E2EC0,(int)lbl_80420CE4,36,(int)fn_802E2D14,(int)fn_802E2EE0,0,0);
}
void *fn_802E2EC0(){return fn_802E2CC8();}
}
#pragma pop
