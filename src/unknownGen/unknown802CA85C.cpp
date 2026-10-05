#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CA79C();
void fn_802CA7E8();
extern char lbl_8041F1C0[];
extern char lbl_804D0EEC[];
extern char lbl_80534E9C[];
void fn_802CA884();
void *fn_802CA8F8();
}
extern "C" {
void fn_802CA85C(){
 fn_80066188((int)fn_802CA884);
}
void fn_802CA884(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534E9C,(int)fn_8002907C,(int)fn_80024180,(int)fn_802CA8F8,(int)lbl_8041F1C0,20,(int)fn_802CA7E8,0,0,(int)lbl_804D0EEC);
}
void *fn_802CA8F8(){return fn_802CA79C();}
}
#pragma pop
