#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802C72BC();
void *fn_802C7770();
void fn_802C77BC();
void fn_802C795C();
void fn_802C7C58();
extern char lbl_8041EE1C[];
extern char lbl_80534D68[];
void fn_802C78C8();
void *fn_802C793C();
}
extern "C" {
void fn_802C78A0(){
 fn_80066188((int)fn_802C78C8);
}
void fn_802C78C8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534D68,(int)fn_802C7C58,(int)fn_802C72BC,(int)fn_802C793C,(int)lbl_8041EE1C,96,(int)fn_802C77BC,(int)fn_802C795C,0,0);
}
void *fn_802C793C(){return fn_802C7770();}
}
#pragma pop
