#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B1078();
void fn_801B10B4();
void fn_801B1288();
extern char lbl_804ACAA0[];
extern char lbl_80560294[8];
extern void *lbl_805648E8;
void fn_801B11F4();
void *fn_801B1268();
}
extern "C" {
void fn_801B11CC(){
 fn_80066188((int)fn_801B11F4);
}
void fn_801B11F4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648E8,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_801B1268,(int)lbl_804ACAA0,24,(int)fn_801B10B4,(int)fn_801B1288,0,(int)lbl_80560294);
}
void *fn_801B1268(){return fn_801B1078();}
}
#pragma pop
