#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void *fn_802AA9D0();
void fn_802AAA1C();
void fn_802AAC90();
extern char lbl_8041BB38[];
extern char lbl_804CD948[];
extern char lbl_80534354[];
extern void *lbl_80534358;
void fn_802AAAB8();
void *fn_802AAB2C();
}
extern "C" {
void fn_802AAA90(){
 fn_80066188((int)fn_802AAAB8);
}
void fn_802AAAB8(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534354,(int)fn_8002907C,(int)fn_80024180,(int)fn_802AAB2C,(int)lbl_8041BB38,20,(int)fn_802AAA1C,0,0,(int)lbl_804CD948);
}
void *fn_802AAB2C(){return fn_802AA9D0();}
void *fn_802AAB4C(){
 if(!lbl_80534358 || !(reinterpret_cast<unsigned int *>(lbl_80534358)[0x24/4]&4)) fn_802AAC90();
 return lbl_80534358;
}
}
#pragma pop
