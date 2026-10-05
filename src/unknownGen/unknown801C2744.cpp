#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801C25D0();
void fn_801C260C();
void fn_801C2800();
extern char lbl_804AFD84[];
extern char lbl_805606D4[8];
extern void *lbl_80564FF4;
void fn_801C276C();
void *fn_801C27E0();
}
extern "C" {
void fn_801C2744(){
 fn_80066188((int)fn_801C276C);
}
void fn_801C276C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564FF4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801C27E0,(int)lbl_804AFD84,48,(int)fn_801C260C,(int)fn_801C2800,0,(int)lbl_805606D4);
}
void *fn_801C27E0(){return fn_801C25D0();}
}
#pragma pop
