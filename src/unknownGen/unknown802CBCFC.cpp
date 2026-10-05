#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CBC14();
void fn_802CBC60();
extern char lbl_8041F2C0[];
extern char lbl_80534F18[];
void fn_802CBD24();
void *fn_802CBD90();
}
extern "C" {
void fn_802CBCFC(){
 fn_80066188((int)fn_802CBD24);
}
void fn_802CBD24(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F18,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CBD90,(int)lbl_8041F2C0,12,(int)fn_802CBC60,0,0,0);
}
void *fn_802CBD90(){return fn_802CBC14();}
}
#pragma pop
