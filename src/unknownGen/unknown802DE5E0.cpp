#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B381C();
void *fn_802DE484();
void fn_802DE4D0();
void fn_802E3908();
extern char lbl_80420770[];
extern char lbl_805354C4[];
void fn_802DE608();
void *fn_802DE674();
}
extern "C" {
void fn_802DE5E0(){
 fn_80066188((int)fn_802DE608);
}
void fn_802DE608(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805354C4,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802DE674,(int)lbl_80420770,32,(int)fn_802DE4D0,0,0,0);
}
void *fn_802DE674(){return fn_802DE484();}
}
#pragma pop
