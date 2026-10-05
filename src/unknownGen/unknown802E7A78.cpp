#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800D108C();
void fn_802B1AC8();
void *fn_802E7838();
void fn_802E7884();
void fn_802E7B3C();
void fn_802E7B4C();
extern char lbl_80421134[];
extern char lbl_804D3208[];
extern char lbl_80535838[];
void fn_802E7AA0();
void *fn_802E7B1C();
}
extern "C" {
void fn_802E7A78(){
 fn_80066188((int)fn_802E7AA0);
}
void fn_802E7AA0(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535838,(int)fn_800D108C,(int)fn_802E7B3C,(int)fn_802E7B1C,(int)lbl_80421134,124,(int)fn_802E7884,(int)fn_802E7B4C,0,(int)lbl_804D3208);
}
void *fn_802E7B1C(){return fn_802E7838();}
}
#pragma pop
