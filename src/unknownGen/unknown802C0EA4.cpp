#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2E3C();
void *fn_802C0CA0();
void fn_802C0CEC();
void fn_802C0F68();
void fn_802E3D20();
extern char lbl_8041E3FC[];
extern char lbl_804CFFE4[];
extern char lbl_80534A5C[];
void fn_802C0ECC();
void *fn_802C0F48();
}
extern "C" {
void fn_802C0EA4(){
 fn_80066188((int)fn_802C0ECC);
}
void fn_802C0ECC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534A5C,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802C0F48,(int)lbl_8041E3FC,36,(int)fn_802C0CEC,(int)fn_802C0F68,0,(int)lbl_804CFFE4);
}
void *fn_802C0F48(){return fn_802C0CA0();}
}
#pragma pop
