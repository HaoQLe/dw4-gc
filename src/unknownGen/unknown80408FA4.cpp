#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_8010E2EC();
void fn_80402E28();
void *fn_80408CE4();
void fn_80408D30();
void fn_80409068();
extern char lbl_80462C0C[];
extern char lbl_804F0F94[];
extern char lbl_8055CB1C[];
void fn_80408FCC();
void *fn_80409048();
}
extern "C" {
void fn_80408FA4(){
 fn_80066188((int)fn_80408FCC);
}
void fn_80408FCC(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CB1C,(int)fn_8010E2EC,(int)fn_8010DF8C,(int)fn_80409048,(int)lbl_80462C0C,44,(int)fn_80408D30,(int)fn_80409068,0,(int)lbl_804F0F94);
}
void *fn_80409048(){return fn_80408CE4();}
}
#pragma pop
