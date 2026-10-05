#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CAB7C();
void fn_802CABC8();
void fn_802CAD20();
extern char lbl_8041F200[];
extern char lbl_80534EB0[];
void fn_802CAC8C();
void *fn_802CAD00();
}
extern "C" {
void fn_802CAC64(){
 fn_80066188((int)fn_802CAC8C);
}
void fn_802CAC8C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534EB0,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CAD00,(int)lbl_8041F200,48,(int)fn_802CABC8,(int)fn_802CAD20,0,0);
}
void *fn_802CAD00(){return fn_802CAB7C();}
}
#pragma pop
