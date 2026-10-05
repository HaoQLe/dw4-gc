#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010F370();
void fn_8010F3AC();
void fn_8010F504();
void fn_80112DF0();
extern char lbl_80494ACC[];
extern char lbl_8055F00C[8];
extern void *lbl_80563650;
extern void *lbl_805637B8;
void fn_8010F468();
void *fn_8010F4DC();
void *fn_8010F4FC();
}
extern "C" {
void fn_8010F440(){
 fn_80066188((int)fn_8010F468);
}
void fn_8010F468(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563650,(int)fn_80112DF0,(int)fn_8010F4FC,(int)fn_8010F4DC,(int)lbl_80494ACC,12,(int)fn_8010F3AC,(int)fn_8010F504,0,(int)lbl_8055F00C);
}
void *fn_8010F4DC(){return fn_8010F370();}
void *fn_8010F4FC(){return lbl_805637B8;}
}
#pragma pop
