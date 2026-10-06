#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D9068();
void fn_802D90B4();
void fn_802D930C();
extern char lbl_80420284[];
extern char lbl_804D2028[];
extern char lbl_80535338[];
extern void *lbl_8053533C;
void fn_802D9150();
void *fn_802D91C4();
}
extern "C" {
void fn_802D9128(){
 fn_80066188((int)fn_802D9150);
}
void fn_802D9150(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535338,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D91C4,(int)lbl_80420284,20,(int)fn_802D90B4,0,0,(int)lbl_804D2028);
}
void *fn_802D91C4(){return fn_802D9068();}
void *fn_802D91E4(void *object){
 fn_802D930C();
 return fn_8006546C(lbl_8053533C,object);
}
void *fn_802D9224(){
 if(!lbl_8053533C || !(reinterpret_cast<unsigned int *>(lbl_8053533C)[0x24/4]&4)) fn_802D930C();
 return lbl_8053533C;
}
}
#pragma pop
