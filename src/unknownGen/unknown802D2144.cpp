#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D2084();
void fn_802D20D0();
extern char lbl_8041FAD8[];
extern char lbl_804D1860[];
extern char lbl_80535114[];
void fn_802D216C();
void *fn_802D21E0();
}
extern "C" {
void fn_802D2144(){
 fn_80066188((int)fn_802D216C);
}
void fn_802D216C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535114,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D21E0,(int)lbl_8041FAD8,20,(int)fn_802D20D0,0,0,(int)lbl_804D1860);
}
void *fn_802D21E0(){return fn_802D2084();}
}
#pragma pop
