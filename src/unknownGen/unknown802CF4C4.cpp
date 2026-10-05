#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802CF404();
void fn_802CF450();
extern char lbl_8041F810[];
extern char lbl_804D1520[];
extern char lbl_80535038[];
void fn_802CF4EC();
void *fn_802CF560();
}
extern "C" {
void fn_802CF4C4(){
 fn_80066188((int)fn_802CF4EC);
}
void fn_802CF4EC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535038,(int)fn_8002907C,(int)fn_80024180,(int)fn_802CF560,(int)lbl_8041F810,20,(int)fn_802CF450,0,0,(int)lbl_804D1520);
}
void *fn_802CF560(){return fn_802CF404();}
}
#pragma pop
