#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D1C74();
void fn_802D1CC0();
void fn_802D1F20();
extern char lbl_8041FAB0[];
extern char lbl_804D1840[];
extern char lbl_80535108[];
extern void *lbl_8053510C;
void fn_802D1D5C();
void *fn_802D1DD0();
}
extern "C" {
void fn_802D1D34(){
 fn_80066188((int)fn_802D1D5C);
}
void fn_802D1D5C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535108,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D1DD0,(int)lbl_8041FAB0,20,(int)fn_802D1CC0,0,0,(int)lbl_804D1840);
}
void *fn_802D1DD0(){return fn_802D1C74();}
void *fn_802D1DF0(){
 if(!lbl_8053510C || !(reinterpret_cast<unsigned int *>(lbl_8053510C)[0x24/4]&4)) fn_802D1F20();
 return lbl_8053510C;
}
}
#pragma pop
