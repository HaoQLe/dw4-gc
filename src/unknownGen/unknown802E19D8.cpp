#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void *fn_802E17F4();
void fn_802E1840();
void fn_802E1A9C();
void fn_802E3D20();
extern char lbl_80420AD4[];
extern char lbl_804D2A10[];
extern char lbl_80535604[];
void fn_802E1A00();
void *fn_802E1A7C();
}
extern "C" {
void fn_802E19D8(){
 fn_80066188((int)fn_802E1A00);
}
void fn_802E1A00(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535604,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802E1A7C,(int)lbl_80420AD4,32,(int)fn_802E1840,(int)fn_802E1A9C,0,(int)lbl_804D2A10);
}
void *fn_802E1A7C(){return fn_802E17F4();}
}
#pragma pop
