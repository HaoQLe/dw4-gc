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
void *fn_802B92E0();
void fn_802B932C();
void fn_802B9530();
extern char lbl_8041D850[];
extern char lbl_804CF634[];
extern char lbl_80534784[];
extern void *lbl_80534788;
void fn_802B93C8();
void *fn_802B943C();
}
extern "C" {
void fn_802B93A0(){
 fn_80066188((int)fn_802B93C8);
}
void fn_802B93C8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534784,(int)fn_8002907C,(int)fn_80024180,(int)fn_802B943C,(int)lbl_8041D850,20,(int)fn_802B932C,0,0,(int)lbl_804CF634);
}
void *fn_802B943C(){return fn_802B92E0();}
void *fn_802B945C(void *object){
 fn_802B9530();
 return fn_8006546C(lbl_80534788,object);
}
void *fn_802B949C(){
 if(!lbl_80534788 || !(reinterpret_cast<unsigned int *>(lbl_80534788)[0x24/4]&4)) fn_802B9530();
 return lbl_80534788;
}
}
#pragma pop
