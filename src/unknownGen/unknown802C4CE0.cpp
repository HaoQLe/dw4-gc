#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
void *fn_802C4B14();
void fn_802C4B60();
void fn_802C4DA4();
void fn_802E40FC();
extern char lbl_8041E8EC[];
extern char lbl_804D0530[];
extern char lbl_80534BD0[];
void fn_802C4D08();
void *fn_802C4D84();
}
extern "C" {
void fn_802C4CE0(){
 fn_80066188((int)fn_802C4D08);
}
void fn_802C4D08(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534BD0,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_802C4D84,(int)lbl_8041E8EC,28,(int)fn_802C4B60,(int)fn_802C4DA4,0,(int)lbl_804D0530);
}
void *fn_802C4D84(){return fn_802C4B14();}
}
#pragma pop
