#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E36C4();
void fn_802E3710();
extern char lbl_80420D7C[];
extern char lbl_804D2DC0[];
extern char lbl_805356F0[];
void fn_802E37AC();
void *fn_802E3820();
}
extern "C" {
void fn_802E3784(){
 fn_80066188((int)fn_802E37AC);
}
void fn_802E37AC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805356F0,(int)fn_8002907C,(int)fn_80024180,(int)fn_802E3820,(int)lbl_80420D7C,20,(int)fn_802E3710,0,0,(int)lbl_804D2DC0);
}
void *fn_802E3820(){return fn_802E36C4();}
}
#pragma pop
