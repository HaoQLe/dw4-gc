#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void *fn_802AAB4C();
void fn_802AAB98();
void *fn_802AAD4C();
void fn_802AAD5C();
void fn_802AB0B0();
extern char lbl_8041BB4C[];
extern char lbl_80534358[];
void fn_802AACB8();
void *fn_802AAD2C();
}
extern "C" {
void fn_802AAC90(){
 fn_80066188((int)fn_802AACB8);
}
void fn_802AACB8(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534358,(int)fn_802AB0B0,(int)fn_802AAD4C,(int)fn_802AAD2C,(int)lbl_8041BB4C,20,(int)fn_802AAB98,(int)fn_802AAD5C,0,0);
}
void *fn_802AAD2C(){return fn_802AAB4C();}
}
#pragma pop
