#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80269380();
void *fn_802693B4();
void fn_802693F0();
void fn_8026958C();
extern char lbl_804C92B0[];
extern char lbl_80560EB0[8];
extern void *lbl_80565FEC;
void fn_802694F8();
void *fn_8026956C();
}
extern "C" {
void fn_802694D0(){
 fn_80066188((int)fn_802694F8);
}
void fn_802694F8(){
 fn_80269380();
 fn_80066204(0,(int)&lbl_80565FEC,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_8026956C,(int)lbl_804C92B0,20,(int)fn_802693F0,(int)fn_8026958C,0,(int)lbl_80560EB0);
}
void *fn_8026956C(){return fn_802693B4();}
}
#pragma pop
