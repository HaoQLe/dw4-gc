#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801C1AB8();
void fn_801C1AF4();
void fn_801C1CCC();
void *fn_801C1D68();
void fn_801C9ABC();
extern char lbl_804AFAC8[];
extern void *lbl_80564F94;
extern void *lbl_805653BC;
void fn_801C1C2C();
void *fn_801C1CA4();
void *fn_801C1CC4();
}
extern "C" {
void fn_801C1C04(){
 fn_80066188((int)fn_801C1C2C);
}
void fn_801C1C2C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564F94,(int)fn_801C9ABC,(int)fn_801C1CC4,(int)fn_801C1CA4,(int)lbl_804AFAC8,168,(int)fn_801C1AF4,(int)fn_801C1CCC,(int)fn_801C1D68,0);
}
void *fn_801C1CA4(){return fn_801C1AB8();}
void *fn_801C1CC4(){return lbl_805653BC;}
}
#pragma pop
