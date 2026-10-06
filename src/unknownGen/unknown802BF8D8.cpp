#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BF818();
void fn_802BF864();
void fn_802BFA34();
extern char lbl_8041E218[];
extern char lbl_804CFDCC[];
extern char lbl_805349B8[];
extern void *lbl_805349BC;
void fn_802BF900();
void *fn_802BF974();
}
extern "C" {
void fn_802BF8D8(){
 fn_80066188((int)fn_802BF900);
}
void fn_802BF900(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805349B8,(int)fn_8002907C,(int)fn_80024180,(int)fn_802BF974,(int)lbl_8041E218,20,(int)fn_802BF864,0,0,(int)lbl_804CFDCC);
}
void *fn_802BF974(){return fn_802BF818();}
void *fn_802BF994(){
 if(!lbl_805349BC || !(reinterpret_cast<unsigned int *>(lbl_805349BC)[0x24/4]&4)) fn_802BFA34();
 return lbl_805349BC;
}
}
#pragma pop
