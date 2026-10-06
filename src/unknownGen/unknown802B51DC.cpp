#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802B5148();
void fn_802B5194();
void fn_802B558C();
extern char lbl_8041D298[];
extern char lbl_80534624[];
extern void *lbl_80534628;
void fn_802B5204();
void *fn_802B5270();
}
extern "C" {
void fn_802B51DC(){
 fn_80066188((int)fn_802B5204);
}
void fn_802B5204(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534624,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802B5270,(int)lbl_8041D298,8,(int)fn_802B5194,0,0,0);
}
void *fn_802B5270(){return fn_802B5148();}
void *fn_802B5290(){
 if(!lbl_80534628 || !(reinterpret_cast<unsigned int *>(lbl_80534628)[0x24/4]&4)) fn_802B558C();
 return lbl_80534628;
}
}
#pragma pop
