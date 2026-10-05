#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802C0098();
void fn_802C00E4();
void fn_802C01E8();
extern char lbl_8041E2C4[];
extern char lbl_805349F0[];
void fn_802C0154();
void *fn_802C01C8();
}
extern "C" {
void fn_802C012C(){
 fn_80066188((int)fn_802C0154);
}
void fn_802C0154(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805349F0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802C01C8,(int)lbl_8041E2C4,12,(int)fn_802C00E4,(int)fn_802C01E8,0,0);
}
void *fn_802C01C8(){return fn_802C0098();}
}
#pragma pop
