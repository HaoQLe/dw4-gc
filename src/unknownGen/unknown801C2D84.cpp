#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801BC288();
void *fn_801C2C30();
void fn_801C2C6C();
void fn_801C2E40();
void fn_801C9D54();
extern char lbl_804AFFBC[];
extern char lbl_805606E4[8];
extern void *lbl_80565030;
void fn_801C2DAC();
void *fn_801C2E20();
}
extern "C" {
void fn_801C2D84(){
 fn_80066188((int)fn_801C2DAC);
}
void fn_801C2DAC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565030,(int)fn_801C9D54,(int)fn_801BC288,(int)fn_801C2E20,(int)lbl_804AFFBC,64,(int)fn_801C2C6C,(int)fn_801C2E40,0,(int)lbl_805606E4);
}
void *fn_801C2E20(){return fn_801C2C30();}
}
#pragma pop
