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
void *fn_80284550();
void fn_80286F0C();
void fn_802B1AC8();
void *fn_802E36C4();
void fn_802E3710();
void fn_802E39A0();
extern char lbl_80420D7C[];
extern char lbl_80420D94[];
extern char lbl_804D2DC0[];
extern char lbl_804D2DC8[];
extern char lbl_805356F0[];
extern void *lbl_805356F4;
extern void *lbl_805621F4;
void fn_802E37AC();
void *fn_802E3820();
void *fn_802E3894();
void fn_802E38E0();
void fn_802E3908();
void *fn_802E3980();
}
extern "C" {
void fn_802E3784(){
 fn_80066188((int)fn_802E37AC);
}
void fn_802E37AC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805356F0,(int)fn_8002907C,(int)fn_80024180,(int)fn_802E3820,(int)lbl_80420D7C,20,(int)fn_802E3710,0,0,(int)lbl_804D2DC0);
}
void *fn_802E3820(){return fn_802E36C4();}
void *fn_802E3840(){
 if(!lbl_805356F4) lbl_805356F4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805356F4;
}
void *fn_802E3894(){
 if(!lbl_805356F4 || !(reinterpret_cast<unsigned int *>(lbl_805356F4)[0x24/4]&4)) fn_802E38E0();
 return lbl_805356F4;
}
void fn_802E38E0(){
 fn_80066188((int)fn_802E3908);
}
void fn_802E3908(){
 fn_802B1AC8();
 fn_80066204(1,(int)&lbl_805356F4,(int)fn_80286F0C,(int)fn_80284550,(int)fn_802E3980,(int)lbl_80420D94,32,0,(int)fn_802E39A0,0,(int)lbl_804D2DC8);
}
void *fn_802E3980(){return fn_802E3894();}
}
#pragma pop
