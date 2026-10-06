#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CEEEC();
void fn_802CEF38();
void fn_802CF244();
extern char lbl_8041F7D0[];
extern char lbl_804D14A0[];
extern char lbl_80535014[];
extern void *lbl_80535018;
void fn_802CEFD4();
void *fn_802CF048();
}
extern "C" {
void fn_802CEFAC(){
 fn_80066188((int)fn_802CEFD4);
}
void fn_802CEFD4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535014,(int)fn_8002907C,(int)fn_80024180,(int)fn_802CF048,(int)lbl_8041F7D0,20,(int)fn_802CEF38,0,0,(int)lbl_804D14A0);
}
void *fn_802CF048(){return fn_802CEEEC();}
void *fn_802CF068(void *object){
 fn_802CF244();
 return fn_8006546C(lbl_80535018,object);
}
void *fn_802CF0A8(){
 if(!lbl_80535018 || !(reinterpret_cast<unsigned int *>(lbl_80535018)[0x24/4]&4)) fn_802CF244();
 return lbl_80535018;
}
}
#pragma pop
