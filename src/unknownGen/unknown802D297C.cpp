#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D28BC();
void fn_802D2908();
void fn_802D2C1C();
extern char lbl_8041FB28[];
extern char lbl_804D18DC[];
extern char lbl_80535138[];
extern void *lbl_8053513C;
void fn_802D29A4();
void *fn_802D2A18();
}
extern "C" {
void fn_802D297C(){
 fn_80066188((int)fn_802D29A4);
}
void fn_802D29A4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535138,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D2A18,(int)lbl_8041FB28,20,(int)fn_802D2908,0,0,(int)lbl_804D18DC);
}
void *fn_802D2A18(){return fn_802D28BC();}
void *fn_802D2A38(){
 if(!lbl_8053513C || !(reinterpret_cast<unsigned int *>(lbl_8053513C)[0x24/4]&4)) fn_802D2C1C();
 return lbl_8053513C;
}
}
#pragma pop
