#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void *fn_802BE89C();
void fn_802BE8E8();
void fn_802BF3C4();
extern char lbl_8041E044[];
extern char lbl_80534954[];
void fn_802BEA2C();
void *fn_802BEA98();
}
extern "C" {
void fn_802BEA04(){
 fn_80066188((int)fn_802BEA2C);
}
void fn_802BEA2C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534954,(int)fn_802BF3C4,(int)fn_802BD764,(int)fn_802BEA98,(int)lbl_8041E044,212,(int)fn_802BE8E8,0,0,0);
}
void *fn_802BEA98(){return fn_802BE89C();}
}
#pragma pop
