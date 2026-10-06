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
void *fn_802C258C();
void fn_802C25D8();
void fn_802C27DC();
extern char lbl_8041E5D8[];
extern char lbl_804D01A8[];
extern char lbl_80534AC4[];
extern void *lbl_80534AC8;
void fn_802C2674();
void *fn_802C26E8();
}
extern "C" {
void fn_802C264C(){
 fn_80066188((int)fn_802C2674);
}
void fn_802C2674(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534AC4,(int)fn_8002907C,(int)fn_80024180,(int)fn_802C26E8,(int)lbl_8041E5D8,20,(int)fn_802C25D8,0,0,(int)lbl_804D01A8);
}
void *fn_802C26E8(){return fn_802C258C();}
void *fn_802C2708(void *object){
 fn_802C27DC();
 return fn_8006546C(lbl_80534AC8,object);
}
void *fn_802C2748(){
 if(!lbl_80534AC8 || !(reinterpret_cast<unsigned int *>(lbl_80534AC8)[0x24/4]&4)) fn_802C27DC();
 return lbl_80534AC8;
}
}
#pragma pop
