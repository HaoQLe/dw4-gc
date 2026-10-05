#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80026500();
void fn_8002653C();
void fn_800268E8();
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_80463B18[];
extern char lbl_80463B38[];
extern void *lbl_80561610;
void *fn_800268C8();
}
extern "C" {
void fn_80026850(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561610,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800268C8,(int)lbl_80463B38,76,(int)fn_8002653C,(int)fn_800268E8,0,(int)lbl_80463B18);
}
void *fn_800268C8(){return fn_80026500();}
}
#pragma pop
