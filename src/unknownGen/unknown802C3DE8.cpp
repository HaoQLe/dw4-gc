#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802C3C4C();
void fn_802C3C98();
void fn_802E3D20();
extern char lbl_8041E7FC[];
extern char lbl_80534B88[];
void fn_802C3E10();
void *fn_802C3E7C();
}
extern "C" {
void fn_802C3DE8(){
 fn_80066188((int)fn_802C3E10);
}
void fn_802C3E10(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B88,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802C3E7C,(int)lbl_8041E7FC,28,(int)fn_802C3C98,0,0,0);
}
void *fn_802C3E7C(){return fn_802C3C4C();}
}
#pragma pop
