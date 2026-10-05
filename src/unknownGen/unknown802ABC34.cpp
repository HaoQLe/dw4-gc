#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void *fn_802ABB4C();
void fn_802ABB98();
extern char lbl_8041BD04[];
extern char lbl_805343D8[];
void fn_802ABC5C();
void *fn_802ABCC8();
}
extern "C" {
void fn_802ABC34(){
 fn_80066188((int)fn_802ABC5C);
}
void fn_802ABC5C(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_805343D8,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802ABCC8,(int)lbl_8041BD04,12,(int)fn_802ABB98,0,0,0);
}
void *fn_802ABCC8(){return fn_802ABB4C();}
}
#pragma pop
