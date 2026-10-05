#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010ECE0();
void fn_8010ED1C();
void fn_8010EE74();
void fn_8010F21C();
extern char lbl_804949F0[];
extern void *lbl_80563618;
extern void *lbl_80563638;
void fn_8010EDDC();
void *fn_8010EE4C();
void *fn_8010EE6C();
}
extern "C" {
void fn_8010EDB4(){
 fn_80066188((int)fn_8010EDDC);
}
void fn_8010EDDC(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563618,(int)fn_8010F21C,(int)fn_8010EE6C,(int)fn_8010EE4C,(int)lbl_804949F0,16,(int)fn_8010ED1C,(int)fn_8010EE74,0,0);
}
void *fn_8010EE4C(){return fn_8010ECE0();}
void *fn_8010EE6C(){return lbl_80563638;}
}
#pragma pop
