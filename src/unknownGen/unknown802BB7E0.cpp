#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802BB684();
void fn_802BB6D0();
void fn_802BB8A4();
void fn_802E3908();
extern char lbl_8041DA3C[];
extern char lbl_804CF808[];
extern char lbl_80534814[];
void fn_802BB808();
void *fn_802BB884();
}
extern "C" {
void fn_802BB7E0(){
 fn_80066188((int)fn_802BB808);
}
void fn_802BB808(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534814,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802BB884,(int)lbl_8041DA3C,36,(int)fn_802BB6D0,(int)fn_802BB8A4,0,(int)lbl_804CF808);
}
void *fn_802BB884(){return fn_802BB684();}
}
#pragma pop
