#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80216620();
void *fn_80217040();
void fn_8021707C();
void fn_80217254();
extern char lbl_804BA420[];
extern char lbl_804BA42C[];
extern void *lbl_80565A08;
void fn_802171BC();
void *fn_80217234();
}
extern "C" {
void fn_80217194(){
 fn_80066188((int)fn_802171BC);
}
void fn_802171BC(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A08,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_80217234,(int)lbl_804BA42C,24,(int)fn_8021707C,(int)fn_80217254,0,(int)lbl_804BA420);
}
void *fn_80217234(){return fn_80217040();}
}
#pragma pop
