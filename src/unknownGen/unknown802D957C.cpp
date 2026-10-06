#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D94BC();
void fn_802D9508();
void fn_802D9814();
extern char lbl_804202B0[];
extern char lbl_804D2040[];
extern char lbl_80535344[];
extern void *lbl_80535348;
void fn_802D95A4();
void *fn_802D9618();
}
extern "C" {
void fn_802D957C(){
 fn_80066188((int)fn_802D95A4);
}
void fn_802D95A4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535344,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D9618,(int)lbl_804202B0,20,(int)fn_802D9508,0,0,(int)lbl_804D2040);
}
void *fn_802D9618(){return fn_802D94BC();}
void *fn_802D9638(){
 if(!lbl_80535348 || !(reinterpret_cast<unsigned int *>(lbl_80535348)[0x24/4]&4)) fn_802D9814();
 return lbl_80535348;
}
}
#pragma pop
