#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B3E18();
void fn_802B3E64();
extern char lbl_8041CAE0[];
extern char lbl_804CEE4C[];
extern char lbl_80534574[];
void fn_802B3F00();
void *fn_802B3F74();
}
extern "C" {
void fn_802B3ED8(){
 fn_80066188((int)fn_802B3F00);
}
void fn_802B3F00(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534574,(int)fn_8002907C,(int)fn_80024180,(int)fn_802B3F74,(int)lbl_8041CAE0,20,(int)fn_802B3E64,0,0,(int)lbl_804CEE4C);
}
void *fn_802B3F74(){return fn_802B3E18();}
}
#pragma pop
