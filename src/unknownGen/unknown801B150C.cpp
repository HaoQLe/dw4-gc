#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801B1398();
void fn_801B13D4();
void fn_801B15CC();
extern char lbl_804ACB0C[];
extern char lbl_804ACB1C[];
extern void *lbl_805648F8;
void fn_801B1534();
void *fn_801B15AC();
}
extern "C" {
void fn_801B150C(){
 fn_80066188((int)fn_801B1534);
}
void fn_801B1534(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648F8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801B15AC,(int)lbl_804ACB1C,24,(int)fn_801B13D4,(int)fn_801B15CC,0,(int)lbl_804ACB0C);
}
void *fn_801B15AC(){return fn_801B1398();}
}
#pragma pop
