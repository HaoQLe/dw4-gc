#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BC28C();
void fn_802BC2D8();
void *fn_802BC428();
void fn_802BF680();
extern char lbl_8041DC74[];
extern char lbl_8053483C[];
void fn_802BC39C();
void *fn_802BC408();
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
}
#pragma pop
