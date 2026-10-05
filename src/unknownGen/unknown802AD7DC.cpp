#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80285E14();
void fn_802AA788();
void *fn_802AD6F8();
void fn_802AD744();
void fn_802AD8A0();
void fn_802AD8B0();
extern char lbl_8041C004[];
extern char lbl_804CDDEC[];
extern char lbl_80534490[];
void fn_802AD804();
void *fn_802AD880();
}
extern "C" {
void fn_802AD7DC(){
 fn_80066188((int)fn_802AD804);
}
void fn_802AD804(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534490,(int)fn_80285E14,(int)fn_802AD8A0,(int)fn_802AD880,(int)lbl_8041C004,12,(int)fn_802AD744,(int)fn_802AD8B0,0,(int)lbl_804CDDEC);
}
void *fn_802AD880(){return fn_802AD6F8();}
}
#pragma pop
