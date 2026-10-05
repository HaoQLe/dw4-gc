#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802C89C8();
void fn_802C8A14();
void fn_802C8C68();
void fn_802E3D20();
extern char lbl_8041EFA0[];
extern char lbl_80534DF0[];
void fn_802C8BD4();
void *fn_802C8C48();
}
extern "C" {
void fn_802C8BAC(){
 fn_80066188((int)fn_802C8BD4);
}
void fn_802C8BD4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534DF0,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802C8C48,(int)lbl_8041EFA0,32,(int)fn_802C8A14,(int)fn_802C8C68,0,0);
}
void *fn_802C8C48(){return fn_802C89C8();}
}
#pragma pop
