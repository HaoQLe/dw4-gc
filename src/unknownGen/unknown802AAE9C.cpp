#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void *fn_802AADDC();
void fn_802AAE28();
extern char lbl_8041BB74[];
extern char lbl_804CD970[];
extern char lbl_80534364[];
void fn_802AAEC4();
void *fn_802AAF38();
}
extern "C" {
void fn_802AAE9C(){
 fn_80066188((int)fn_802AAEC4);
}
void fn_802AAEC4(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534364,(int)fn_8002907C,(int)fn_80024180,(int)fn_802AAF38,(int)lbl_8041BB74,20,(int)fn_802AAE28,0,0,(int)lbl_804CD970);
}
void *fn_802AAF38(){return fn_802AADDC();}
}
#pragma pop
