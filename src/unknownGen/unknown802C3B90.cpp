#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C3AD0();
void fn_802C3B1C();
extern char lbl_8041E7E4[];
extern char lbl_804D0448[];
extern char lbl_80534B84[];
void fn_802C3BB8();
void *fn_802C3C2C();
}
extern "C" {
void fn_802C3B90(){
 fn_80066188((int)fn_802C3BB8);
}
void fn_802C3BB8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B84,(int)fn_8002907C,(int)fn_80024180,(int)fn_802C3C2C,(int)lbl_8041E7E4,20,(int)fn_802C3B1C,0,0,(int)lbl_804D0448);
}
void *fn_802C3C2C(){return fn_802C3AD0();}
}
#pragma pop
