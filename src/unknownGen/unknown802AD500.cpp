#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80286F0C();
void fn_802AA788();
void *fn_802AD2DC();
void fn_802AD328();
void fn_802AD5C4();
extern char lbl_8041BFA4[];
extern char lbl_804CDD74[];
extern char lbl_80534474[];
void fn_802AD528();
void *fn_802AD5A4();
}
extern "C" {
void fn_802AD500(){
 fn_80066188((int)fn_802AD528);
}
void fn_802AD528(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534474,(int)fn_80286F0C,(int)fn_80284550,(int)fn_802AD5A4,(int)lbl_8041BFA4,40,(int)fn_802AD328,(int)fn_802AD5C4,0,(int)lbl_804CDD74);
}
void *fn_802AD5A4(){return fn_802AD2DC();}
}
#pragma pop
