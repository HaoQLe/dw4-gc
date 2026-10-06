#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B3E18();
void fn_802B3E64();
void fn_802B40A8();
extern char lbl_8041CAE0[];
extern char lbl_804CEE4C[];
extern char lbl_80534574[];
extern void *lbl_80534578;
extern void *lbl_805621F4;
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
void *fn_802B3F94(){
 if(!lbl_80534578) lbl_80534578=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534578;
}
void *fn_802B3FE8(){
 if(!lbl_80534578 || !(reinterpret_cast<unsigned int *>(lbl_80534578)[0x24/4]&4)) fn_802B40A8();
 return lbl_80534578;
}
}
#pragma pop
