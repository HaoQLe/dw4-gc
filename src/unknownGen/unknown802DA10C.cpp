#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DA04C();
void fn_802DA098();
void fn_802DA324();
extern char lbl_804203D0[];
extern char lbl_804D2184[];
extern char lbl_80535384[];
extern void *lbl_80535388;
void fn_802DA134();
void *fn_802DA1A8();
}
extern "C" {
void fn_802DA10C(){
 fn_80066188((int)fn_802DA134);
}
void fn_802DA134(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535384,(int)fn_8002907C,(int)fn_80024180,(int)fn_802DA1A8,(int)lbl_804203D0,20,(int)fn_802DA098,0,0,(int)lbl_804D2184);
}
void *fn_802DA1A8(){return fn_802DA04C();}
void *fn_802DA1C8(){
 if(!lbl_80535388 || !(reinterpret_cast<unsigned int *>(lbl_80535388)[0x24/4]&4)) fn_802DA324();
 return lbl_80535388;
}
}
#pragma pop
