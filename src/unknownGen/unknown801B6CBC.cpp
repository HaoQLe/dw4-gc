#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_800D1FF0();
void fn_801AA6DC();
void *fn_801B6AA8();
void fn_801B6AE4();
void fn_801B6D78();
void fn_8021746C();
extern char lbl_804ADC98[];
extern char lbl_8056038C[8];
extern void *lbl_80564B98;
void fn_801B6CE4();
void *fn_801B6D58();
}
extern "C" {
void fn_801B6CBC(){
 fn_80066188((int)fn_801B6CE4);
}
void fn_801B6CE4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564B98,(int)fn_8021746C,(int)fn_800D1FF0,(int)fn_801B6D58,(int)lbl_804ADC98,40,(int)fn_801B6AE4,(int)fn_801B6D78,0,(int)lbl_8056038C);
}
void *fn_801B6D58(){return fn_801B6AA8();}
}
#pragma pop
