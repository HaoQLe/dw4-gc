#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_803250AC();
void *fn_8033DC60();
void fn_8033DCAC();
void fn_8033DDB8();
extern char lbl_80454B00[];
extern char lbl_804E32C0[];
extern char lbl_8053645C[];
void fn_8033DD1C();
void *fn_8033DD98();
}
extern "C" {
void fn_8033DCF4(){
 fn_80066188((int)fn_8033DD1C);
}
void fn_8033DD1C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053645C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8033DD98,(int)lbl_80454B00,68,(int)fn_8033DCAC,(int)fn_8033DDB8,0,(int)lbl_804E32C0);
}
void *fn_8033DD98(){return fn_8033DC60();}
}
#pragma pop
