#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80402E28();
void *fn_804033D0();
void fn_8040341C();
extern char lbl_80461D34[];
extern char lbl_804EFF58[];
extern char lbl_8055C740[];
void fn_804034B8();
void *fn_8040352C();
}
extern "C" {
void fn_80403490(){
 fn_80066188((int)fn_804034B8);
}
void fn_804034B8(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C740,(int)fn_8002907C,(int)fn_80024180,(int)fn_8040352C,(int)lbl_80461D34,20,(int)fn_8040341C,0,0,(int)lbl_804EFF58);
}
void *fn_8040352C(){return fn_804033D0();}
}
#pragma pop
