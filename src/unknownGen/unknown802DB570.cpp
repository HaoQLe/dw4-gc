#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DB4B0();
void fn_802DB4FC();
extern char lbl_80420548[];
extern char lbl_804D2364[];
extern char lbl_80535404[];
void fn_802DB598();
void *fn_802DB60C();
}
extern "C" {
void fn_802DB570(){
 fn_80066188((int)fn_802DB598);
}
void fn_802DB598(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535404,(int)fn_8002907C,(int)fn_80024180,(int)fn_802DB60C,(int)lbl_80420548,20,(int)fn_802DB4FC,0,0,(int)lbl_804D2364);
}
void *fn_802DB60C(){return fn_802DB4B0();}
}
#pragma pop
