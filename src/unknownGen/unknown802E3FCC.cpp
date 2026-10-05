#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E3F0C();
void fn_802E3F58();
extern char lbl_80420DD4[];
extern char lbl_804D2E4C[];
extern char lbl_80535718[];
void fn_802E3FF4();
void *fn_802E4068();
}
extern "C" {
void fn_802E3FCC(){
 fn_80066188((int)fn_802E3FF4);
}
void fn_802E3FF4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535718,(int)fn_8002907C,(int)fn_80024180,(int)fn_802E4068,(int)lbl_80420DD4,20,(int)fn_802E3F58,0,0,(int)lbl_804D2E4C);
}
void *fn_802E4068(){return fn_802E3F0C();}
}
#pragma pop
