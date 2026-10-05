#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284294();
void *fn_80284444();
extern char lbl_80416924[];
extern char lbl_80515C58[];
void fn_802844B8();
void *fn_80284520();
}
extern "C" {
void fn_80284490(){
 fn_80066188((int)fn_802844B8);
}
void fn_802844B8(){
 fn_80284294();
 fn_80066204(1,(int)lbl_80515C58,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_80284520,(int)lbl_80416924,12,0,0,0,0);
}
void *fn_80284520(){return fn_80284444();}
}
#pragma pop
