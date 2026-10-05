#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DD610();
void fn_802DD65C();
void fn_802DD7B4();
extern char lbl_80420668[];
extern char lbl_80535478[];
void fn_802DD720();
void *fn_802DD794();
}
extern "C" {
void fn_802DD6F8(){
 fn_80066188((int)fn_802DD720);
}
void fn_802DD720(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535478,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802DD794,(int)lbl_80420668,16,(int)fn_802DD65C,(int)fn_802DD7B4,0,0);
}
void *fn_802DD794(){return fn_802DD610();}
}
#pragma pop
