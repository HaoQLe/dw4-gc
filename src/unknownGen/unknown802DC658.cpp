#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DC528();
void fn_802DC574();
void fn_802DC71C();
extern char lbl_804205F8[];
extern char lbl_804D2434[];
extern char lbl_80535448[];
void fn_802DC680();
void *fn_802DC6FC();
}
extern "C" {
void fn_802DC658(){
 fn_80066188((int)fn_802DC680);
}
void fn_802DC680(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535448,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802DC6FC,(int)lbl_804205F8,16,(int)fn_802DC574,(int)fn_802DC71C,0,(int)lbl_804D2434);
}
void *fn_802DC6FC(){return fn_802DC528();}
}
#pragma pop
