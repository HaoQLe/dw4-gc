#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010DF8C();
void fn_8010E2EC();
void fn_80402E28();
void *fn_80408420();
void fn_8040846C();
void fn_804087A4();
extern char lbl_80462A98[];
extern char lbl_804F0DC8[];
extern char lbl_8055CAB0[];
void fn_80408708();
void *fn_80408784();
}
extern "C" {
void fn_804086E0(){
 fn_80066188((int)fn_80408708);
}
void fn_80408708(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CAB0,(int)fn_8010E2EC,(int)fn_8010DF8C,(int)fn_80408784,(int)lbl_80462A98,48,(int)fn_8040846C,(int)fn_804087A4,0,(int)lbl_804F0DC8);
}
void *fn_80408784(){return fn_80408420();}
}
#pragma pop
