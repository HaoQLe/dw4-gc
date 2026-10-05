#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_80216620();
void *fn_802192F8();
void fn_80219334();
void fn_80219564();
extern char lbl_804BA990[];
extern char lbl_804BA9A0[];
extern void *lbl_80565B08;
void fn_802194CC();
void *fn_80219544();
}
extern "C" {
void fn_802194A4(){
 fn_80066188((int)fn_802194CC);
}
void fn_802194CC(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565B08,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80219544,(int)lbl_804BA9A0,28,(int)fn_80219334,(int)fn_80219564,0,(int)lbl_804BA990);
}
void *fn_80219544(){return fn_802192F8();}
}
#pragma pop
