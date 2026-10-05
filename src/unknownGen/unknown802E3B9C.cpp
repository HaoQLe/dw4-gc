#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E3ADC();
void fn_802E3B28();
extern char lbl_80420DB8[];
extern char lbl_804D2E18[];
extern char lbl_80535708[];
void fn_802E3BC4();
void *fn_802E3C38();
}
extern "C" {
void fn_802E3B9C(){
 fn_80066188((int)fn_802E3BC4);
}
void fn_802E3BC4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535708,(int)fn_8002907C,(int)fn_80024180,(int)fn_802E3C38,(int)lbl_80420DB8,20,(int)fn_802E3B28,0,0,(int)lbl_804D2E18);
}
void *fn_802E3C38(){return fn_802E3ADC();}
}
#pragma pop
