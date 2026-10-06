#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C331C();
void fn_802C3368();
void fn_802C3570();
extern char lbl_8041E76C[];
extern char lbl_804D03F0[];
extern char lbl_80534B64[];
extern void *lbl_80534B68;
void fn_802C3404();
void *fn_802C3478();
}
extern "C" {
void fn_802C33DC(){
 fn_80066188((int)fn_802C3404);
}
void fn_802C3404(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B64,(int)fn_8002907C,(int)fn_80024180,(int)fn_802C3478,(int)lbl_8041E76C,20,(int)fn_802C3368,0,0,(int)lbl_804D03F0);
}
void *fn_802C3478(){return fn_802C331C();}
void *fn_802C3498(){
 if(!lbl_80534B68 || !(reinterpret_cast<unsigned int *>(lbl_80534B68)[0x24/4]&4)) fn_802C3570();
 return lbl_80534B68;
}
}
#pragma pop
