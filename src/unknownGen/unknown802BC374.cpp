#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BC28C();
void fn_802BC2D8();
void fn_802BC568();
void fn_802BF680();
extern char lbl_8041DC74[];
extern char lbl_8053483C[];
extern void *lbl_80534840;
extern void *lbl_805349A4;
void fn_802BC39C();
void *fn_802BC408();
void *fn_802BC428();
}
extern "C" {
void fn_802BC374(){
 fn_80066188((int)fn_802BC39C);
}
void fn_802BC39C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053483C,(int)fn_802BF680,(int)fn_802BC428,(int)fn_802BC408,(int)lbl_8041DC74,24,(int)fn_802BC2D8,0,0,0);
}
void *fn_802BC408(){return fn_802BC28C();}
void *fn_802BC428(){return lbl_805349A4;}
void *fn_802BC438(){
 if(!lbl_80534840 || !(reinterpret_cast<unsigned int *>(lbl_80534840)[0x24/4]&4)) fn_802BC568();
 return lbl_80534840;
}
}
#pragma pop
