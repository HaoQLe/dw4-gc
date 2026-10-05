#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80286F0C();
void fn_802B1AC8();
void *fn_802C21C8();
void fn_802C2214();
void fn_802C2458();
extern char lbl_8041E590[];
extern char lbl_804D0148[];
extern char lbl_80534AAC[];
void fn_802C23BC();
void *fn_802C2438();
}
extern "C" {
void fn_802C2394(){
 fn_80066188((int)fn_802C23BC);
}
void fn_802C23BC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534AAC,(int)fn_80286F0C,(int)fn_80284550,(int)fn_802C2438,(int)lbl_8041E590,32,(int)fn_802C2214,(int)fn_802C2458,0,(int)lbl_804D0148);
}
void *fn_802C2438(){return fn_802C21C8();}
}
#pragma pop
