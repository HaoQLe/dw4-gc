#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CD380();
void fn_802CD3CC();
void fn_802CD6E0();
extern char lbl_8041F568[];
extern char lbl_804D1200[];
extern char lbl_80534F6C[];
extern void *lbl_80534F70;
void fn_802CD468();
void *fn_802CD4DC();
}
extern "C" {
void fn_802CD440(){
 fn_80066188((int)fn_802CD468);
}
void fn_802CD468(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F6C,(int)fn_8002907C,(int)fn_80024180,(int)fn_802CD4DC,(int)lbl_8041F568,20,(int)fn_802CD3CC,0,0,(int)lbl_804D1200);
}
void *fn_802CD4DC(){return fn_802CD380();}
void *fn_802CD4FC(){
 if(!lbl_80534F70 || !(reinterpret_cast<unsigned int *>(lbl_80534F70)[0x24/4]&4)) fn_802CD6E0();
 return lbl_80534F70;
}
}
#pragma pop
