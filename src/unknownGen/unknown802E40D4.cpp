#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E4088();
void fn_802E418C();
extern char lbl_80420DE8[];
extern char lbl_8053571C[];
void fn_802E40FC();
void *fn_802E416C();
}
extern "C" {
void fn_802E40D4(){
 fn_80066188((int)fn_802E40FC);
}
void fn_802E40FC(){
 fn_802B1AC8();
 fn_80066204(1,(int)lbl_8053571C,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802E416C,(int)lbl_80420DE8,16,0,(int)fn_802E418C,0,0);
}
void *fn_802E416C(){return fn_802E4088();}
}
#pragma pop
