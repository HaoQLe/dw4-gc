#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802D5A48();
void fn_802D5A94();
void fn_802D5BDC();
extern char lbl_8041FE78[];
extern char lbl_80535210[];
void fn_802D5B48();
void *fn_802D5BBC();
}
extern "C" {
void fn_802D5B20(){
 fn_80066188((int)fn_802D5B48);
}
void fn_802D5B48(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535210,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802D5BBC,(int)lbl_8041FE78,88,(int)fn_802D5A94,(int)fn_802D5BDC,0,0);
}
void *fn_802D5BBC(){return fn_802D5A48();}
}
#pragma pop
