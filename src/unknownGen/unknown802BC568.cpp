#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BC428();
void *fn_802BC438();
void fn_802BC484();
void fn_802BC62C();
void fn_802BF680();
extern char lbl_8041DC84[];
extern char lbl_804CF904[];
extern char lbl_80534840[];
void fn_802BC590();
void *fn_802BC60C();
}
extern "C" {
void fn_802BC568(){
 fn_80066188((int)fn_802BC590);
}
void fn_802BC590(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534840,(int)fn_802BF680,(int)fn_802BC428,(int)fn_802BC60C,(int)lbl_8041DC84,44,(int)fn_802BC484,(int)fn_802BC62C,0,(int)lbl_804CF904);
}
void *fn_802BC60C(){return fn_802BC438();}
}
#pragma pop
