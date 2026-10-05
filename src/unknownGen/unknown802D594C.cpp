#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D588C();
void fn_802D58D8();
extern char lbl_8041FE60[];
extern char lbl_804D1BF8[];
extern char lbl_8053520C[];
void fn_802D5974();
void *fn_802D59E8();
}
extern "C" {
void fn_802D594C(){
 fn_80066188((int)fn_802D5974);
}
void fn_802D5974(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053520C,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D59E8,(int)lbl_8041FE60,20,(int)fn_802D58D8,0,0,(int)lbl_804D1BF8);
}
void *fn_802D59E8(){return fn_802D588C();}
}
#pragma pop
