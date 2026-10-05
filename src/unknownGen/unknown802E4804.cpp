#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E4744();
void fn_802E4790();
extern char lbl_80420E3C[];
extern char lbl_804D2E7C[];
extern char lbl_80535730[];
void fn_802E482C();
void *fn_802E48A0();
}
extern "C" {
void fn_802E4804(){
 fn_80066188((int)fn_802E482C);
}
void fn_802E482C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535730,(int)fn_8002907C,(int)fn_80024180,(int)fn_802E48A0,(int)lbl_80420E3C,20,(int)fn_802E4790,0,0,(int)lbl_804D2E7C);
}
void *fn_802E48A0(){return fn_802E4744();}
}
#pragma pop
