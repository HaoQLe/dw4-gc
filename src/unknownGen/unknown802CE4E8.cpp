#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CE428();
void fn_802CE474();
void fn_802CE7A0();
extern char lbl_8041F70C[];
extern char lbl_804D13E4[];
extern char lbl_80534FE0[];
extern void *lbl_80534FE4;
void fn_802CE510();
void *fn_802CE584();
}
extern "C" {
void fn_802CE4E8(){
 fn_80066188((int)fn_802CE510);
}
void fn_802CE510(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534FE0,(int)fn_8002907C,(int)fn_80024180,(int)fn_802CE584,(int)lbl_8041F70C,20,(int)fn_802CE474,0,0,(int)lbl_804D13E4);
}
void *fn_802CE584(){return fn_802CE428();}
void *fn_802CE5A4(void *object){
 fn_802CE7A0();
 return fn_8006546C(lbl_80534FE4,object);
}
void *fn_802CE5E4(){
 if(!lbl_80534FE4 || !(reinterpret_cast<unsigned int *>(lbl_80534FE4)[0x24/4]&4)) fn_802CE7A0();
 return lbl_80534FE4;
}
}
#pragma pop
