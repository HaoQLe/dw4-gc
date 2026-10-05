#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_8010E2EC();
void fn_80284294();
void *fn_802870A0();
void fn_802870EC();
extern char lbl_80416CB4[];
extern char lbl_80515D40[];
void fn_802871B0();
void *fn_8028721C();
}
extern "C" {
void fn_80287188(){
 fn_80066188((int)fn_802871B0);
}
void fn_802871B0(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515D40,(int)fn_8010E2EC,(int)fn_8010DF8C,(int)fn_8028721C,(int)lbl_80416CB4,12,(int)fn_802870EC,0,0,0);
}
void *fn_8028721C(){return fn_802870A0();}
}
#pragma pop
