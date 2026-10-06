#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DB4B0();
void fn_802DB4FC();
void fn_802DB798();
extern char lbl_80420548[];
extern char lbl_804D2364[];
extern char lbl_80535404[];
extern void *lbl_80535408;
extern void *lbl_805621F4;
void fn_802DB598();
void *fn_802DB60C();
}
extern "C" {
void fn_802DB570(){
 fn_80066188((int)fn_802DB598);
}
void fn_802DB598(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535404,(int)fn_8002907C,(int)fn_80024180,(int)fn_802DB60C,(int)lbl_80420548,20,(int)fn_802DB4FC,0,0,(int)lbl_804D2364);
}
void *fn_802DB60C(){return fn_802DB4B0();}
void *fn_802DB62C(void *object){
 fn_802DB798();
 return fn_8006546C(lbl_80535408,object);
}
void *fn_802DB66C(){
 if(!lbl_80535408) lbl_80535408=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535408;
}
void *fn_802DB6C0(){
 if(!lbl_80535408 || !(reinterpret_cast<unsigned int *>(lbl_80535408)[0x24/4]&4)) fn_802DB798();
 return lbl_80535408;
}
}
#pragma pop
