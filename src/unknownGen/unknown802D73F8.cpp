#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D7338();
void fn_802D7384();
extern char lbl_80420038[];
extern char lbl_804D1DB0[];
extern char lbl_80535290[];
void fn_802D7420();
void *fn_802D7494();
}
extern "C" {
void fn_802D73F8(){
 fn_80066188((int)fn_802D7420);
}
void fn_802D7420(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535290,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D7494,(int)lbl_80420038,20,(int)fn_802D7384,0,0,(int)lbl_804D1DB0);
}
void *fn_802D7494(){return fn_802D7338();}
}
#pragma pop
