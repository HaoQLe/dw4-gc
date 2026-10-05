#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802C1AB0();
void fn_802C1AFC();
void fn_802C1D78();
void fn_802E3D20();
extern char lbl_8041E504[];
extern char lbl_804D00C0[];
extern char lbl_80534A90[];
void fn_802C1CDC();
void *fn_802C1D58();
}
extern "C" {
void fn_802C1CB4(){
 fn_80066188((int)fn_802C1CDC);
}
void fn_802C1CDC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534A90,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802C1D58,(int)lbl_8041E504,48,(int)fn_802C1AFC,(int)fn_802C1D78,0,(int)lbl_804D00C0);
}
void *fn_802C1D58(){return fn_802C1AB0();}
}
#pragma pop
