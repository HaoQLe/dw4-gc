#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802BC7D0();
void fn_802BC81C();
void fn_802BC920();
extern char lbl_8041DCD4[];
extern char lbl_80534858[];
void fn_802BC88C();
void *fn_802BC900();
}
extern "C" {
void fn_802BC864(){
 fn_80066188((int)fn_802BC88C);
}
void fn_802BC88C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534858,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802BC900,(int)lbl_8041DCD4,16,(int)fn_802BC81C,(int)fn_802BC920,0,0);
}
void *fn_802BC900(){return fn_802BC7D0();}
}
#pragma pop
