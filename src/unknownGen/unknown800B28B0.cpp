#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B26B4();
void fn_800B26F0();
void fn_800B2970();
extern char lbl_80478D10[];
extern char lbl_80478D24[];
extern void *lbl_805626C0;
void fn_800B28D8();
void *fn_800B2950();
}
extern "C" {
void fn_800B28B0(){
 fn_80066188((int)fn_800B28D8);
}
void fn_800B28D8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626C0,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B2950,(int)lbl_80478D24,52,(int)fn_800B26F0,(int)fn_800B2970,0,(int)lbl_80478D10);
}
void *fn_800B2950(){return fn_800B26B4();}
}
#pragma pop
