#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802DF638();
void fn_802DF684();
void fn_802DF818();
extern char lbl_8042093C[];
extern char lbl_804D27D4[];
extern char lbl_8053555C[];
void fn_802DF77C();
void *fn_802DF7F8();
}
extern "C" {
void fn_802DF754(){
 fn_80066188((int)fn_802DF77C);
}
void fn_802DF77C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053555C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802DF7F8,(int)lbl_8042093C,24,(int)fn_802DF684,(int)fn_802DF818,0,(int)lbl_804D27D4);
}
void *fn_802DF7F8(){return fn_802DF638();}
}
#pragma pop
