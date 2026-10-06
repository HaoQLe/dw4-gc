#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BD764();
void *fn_802BE89C();
void fn_802BE8E8();
void fn_802BEC60();
void fn_802BF3C4();
extern char lbl_8041E044[];
extern char lbl_80534954[];
extern void *lbl_80534958;
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
void *fn_802BEAB8(void *object){
 fn_802BEC60();
 return fn_8006546C(lbl_80534958,object);
}
void *fn_802BEAF8(){
 if(!lbl_80534958 || !(reinterpret_cast<unsigned int *>(lbl_80534958)[0x24/4]&4)) fn_802BEC60();
 return lbl_80534958;
}
}
#pragma pop
