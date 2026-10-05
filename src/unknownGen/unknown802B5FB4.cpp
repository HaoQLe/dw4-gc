#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B5EF4();
void fn_802B5F40();
extern char lbl_8041D334[];
extern char lbl_804CF188[];
extern char lbl_80534660[];
void fn_802B5FDC();
void *fn_802B6050();
}
extern "C" {
void fn_802B5FB4(){
 fn_80066188((int)fn_802B5FDC);
}
void fn_802B5FDC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534660,(int)fn_8002907C,(int)fn_80024180,(int)fn_802B6050,(int)lbl_8041D334,20,(int)fn_802B5F40,0,0,(int)lbl_804CF188);
}
void *fn_802B6050(){return fn_802B5EF4();}
}
#pragma pop
