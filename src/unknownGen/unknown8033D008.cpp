#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_8033CF0C();
void fn_8033CF58();
void fn_8033D0CC();
extern char lbl_804549A8[];
extern char lbl_804E2FFC[];
extern char lbl_805363A0[];
void fn_8033D030();
void *fn_8033D0AC();
}
extern "C" {
void fn_8033D008(){
 fn_80066188((int)fn_8033D030);
}
void fn_8033D030(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805363A0,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_8033D0AC,(int)lbl_804549A8,76,(int)fn_8033CF58,(int)fn_8033D0CC,0,(int)lbl_804E2FFC);
}
void *fn_8033D0AC(){return fn_8033CF0C();}
}
#pragma pop
