#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B2E3C();
void *fn_802B6070();
void fn_802B60BC();
void fn_802B6318();
void fn_802E3D20();
extern char lbl_8041D34C[];
extern char lbl_804CF190[];
extern char lbl_80534664[];
void fn_802B627C();
void *fn_802B62F8();
}
extern "C" {
void fn_802B6254(){
 fn_80066188((int)fn_802B627C);
}
void fn_802B627C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534664,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_802B62F8,(int)lbl_8041D34C,36,(int)fn_802B60BC,(int)fn_802B6318,0,(int)lbl_804CF190);
}
void *fn_802B62F8(){return fn_802B6070();}
}
#pragma pop
