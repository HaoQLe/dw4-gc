#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802C3900();
void fn_802C394C();
void fn_802C3A50();
extern char lbl_8041E7C0[];
extern char lbl_80534B78[];
void fn_802C39BC();
void *fn_802C3A30();
}
extern "C" {
void fn_802C3994(){
 fn_80066188((int)fn_802C39BC);
}
void fn_802C39BC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B78,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802C3A30,(int)lbl_8041E7C0,16,(int)fn_802C394C,(int)fn_802C3A50,0,0);
}
void *fn_802C3A30(){return fn_802C3900();}
}
#pragma pop
