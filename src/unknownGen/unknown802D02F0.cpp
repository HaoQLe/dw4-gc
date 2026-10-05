#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
void *fn_802D014C();
void fn_802D0198();
void fn_802D03B4();
void fn_802E3284();
extern char lbl_8041F920[];
extern char lbl_804D1674[];
extern char lbl_8053508C[];
void fn_802D0318();
void *fn_802D0394();
}
extern "C" {
void fn_802D02F0(){
 fn_80066188((int)fn_802D0318);
}
void fn_802D0318(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053508C,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_802D0394,(int)lbl_8041F920,48,(int)fn_802D0198,(int)fn_802D03B4,0,(int)lbl_804D1674);
}
void *fn_802D0394(){return fn_802D014C();}
}
#pragma pop
