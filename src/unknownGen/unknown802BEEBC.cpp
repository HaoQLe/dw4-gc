#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802BD764();
void *fn_802BED54();
void fn_802BEDA0();
void fn_802BF3C4();
extern char lbl_8041E064[];
extern char lbl_8053495C[];
void fn_802BEEE4();
void *fn_802BEF50();
}
extern "C" {
void fn_802BEEBC(){
 fn_80066188((int)fn_802BEEE4);
}
void fn_802BEEE4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053495C,(int)fn_802BF3C4,(int)fn_802BD764,(int)fn_802BEF50,(int)lbl_8041E064,212,(int)fn_802BEDA0,0,0,0);
}
void *fn_802BEF50(){return fn_802BED54();}
}
#pragma pop
