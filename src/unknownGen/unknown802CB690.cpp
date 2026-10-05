#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CB520();
void fn_802CB56C();
void fn_802CB74C();
extern char lbl_8041F27C[];
extern char lbl_80534EE4[];
void fn_802CB6B8();
void *fn_802CB72C();
}
extern "C" {
void fn_802CB690(){
 fn_80066188((int)fn_802CB6B8);
}
void fn_802CB6B8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534EE4,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802CB72C,(int)lbl_8041F27C,20,(int)fn_802CB56C,(int)fn_802CB74C,0,0);
}
void *fn_802CB72C(){return fn_802CB520();}
}
#pragma pop
