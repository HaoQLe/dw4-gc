#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801B8524();
void fn_801B8560();
void fn_801B87C4();
extern char lbl_804AE018[];
extern char lbl_8056042C[8];
extern void *lbl_80564C1C;
void fn_801B8730();
void *fn_801B87A4();
}
extern "C" {
void fn_801B8708(){
 fn_80066188((int)fn_801B8730);
}
void fn_801B8730(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564C1C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801B87A4,(int)lbl_8056042C,84,(int)fn_801B8560,(int)fn_801B87C4,0,(int)lbl_804AE018);
}
void *fn_801B87A4(){return fn_801B8524();}
}
#pragma pop
