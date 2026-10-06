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
void fn_802AA788();
void *fn_802AB97C();
void fn_802AB9C8();
void fn_802ABC34();
extern char lbl_8041BCF0[];
extern char lbl_804CDB00[];
extern char lbl_805343D4[];
extern void *lbl_805343D8;
extern void *lbl_805621F4;
void fn_802ABA64();
void *fn_802ABAD8();
}
extern "C" {
void fn_802ABA3C(){
 fn_80066188((int)fn_802ABA64);
}
void fn_802ABA64(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_805343D4,(int)fn_8002907C,(int)fn_80024180,(int)fn_802ABAD8,(int)lbl_8041BCF0,20,(int)fn_802AB9C8,0,0,(int)lbl_804CDB00);
}
void *fn_802ABAD8(){return fn_802AB97C();}
void *fn_802ABAF8(){
 if(!lbl_805343D8) lbl_805343D8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805343D8;
}
void *fn_802ABB4C(){
 if(!lbl_805343D8 || !(reinterpret_cast<unsigned int *>(lbl_805343D8)[0x24/4]&4)) fn_802ABC34();
 return lbl_805343D8;
}
}
#pragma pop
