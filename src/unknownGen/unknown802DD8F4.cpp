#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DD834();
void fn_802DD880();
extern char lbl_80420678[];
extern char lbl_804D24C4[];
extern char lbl_80535480[];
void fn_802DD91C();
void *fn_802DD990();
}
extern "C" {
void fn_802DD8F4(){
 fn_80066188((int)fn_802DD91C);
}
void fn_802DD91C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535480,(int)fn_8002907C,(int)fn_80024180,(int)fn_802DD990,(int)lbl_80420678,20,(int)fn_802DD880,0,0,(int)lbl_804D24C4);
}
void *fn_802DD990(){return fn_802DD834();}
}
#pragma pop
