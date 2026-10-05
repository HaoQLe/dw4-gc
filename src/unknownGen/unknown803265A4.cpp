#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_803264A8();
void fn_803264F4();
void fn_80326660();
extern char lbl_804533DC[];
extern char lbl_80535D00[];
void fn_803265CC();
void *fn_80326640();
}
extern "C" {
void fn_803265A4(){
 fn_80066188((int)fn_803265CC);
}
void fn_803265CC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D00,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_80326640,(int)lbl_804533DC,48,(int)fn_803264F4,(int)fn_80326660,0,0);
}
void *fn_80326640(){return fn_803264A8();}
}
#pragma pop
