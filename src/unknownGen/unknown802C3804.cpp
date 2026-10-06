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
void *fn_802C3744();
void fn_802C3790();
void fn_802C3994();
extern char lbl_8041E7A8[];
extern char lbl_804D0420[];
extern char lbl_80534B74[];
extern void *lbl_80534B78;
void fn_802C382C();
void *fn_802C38A0();
}
extern "C" {
void fn_802C3804(){
 fn_80066188((int)fn_802C382C);
}
void fn_802C382C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B74,(int)fn_8002907C,(int)fn_80024180,(int)fn_802C38A0,(int)lbl_8041E7A8,20,(int)fn_802C3790,0,0,(int)lbl_804D0420);
}
void *fn_802C38A0(){return fn_802C3744();}
void *fn_802C38C0(void *object){
 fn_802C3994();
 return fn_8006546C(lbl_80534B78,object);
}
void *fn_802C3900(){
 if(!lbl_80534B78 || !(reinterpret_cast<unsigned int *>(lbl_80534B78)[0x24/4]&4)) fn_802C3994();
 return lbl_80534B78;
}
}
#pragma pop
