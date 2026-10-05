#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801C9958();
void fn_801C9994();
void fn_801C9B50();
extern char lbl_804B1BD4[];
extern char lbl_80560900[8];
extern void *lbl_805653BC;
void fn_801C9ABC();
void *fn_801C9B30();
}
extern "C" {
void fn_801C9A94(){
 fn_80066188((int)fn_801C9ABC);
}
void fn_801C9ABC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805653BC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801C9B30,(int)lbl_804B1BD4,160,(int)fn_801C9994,(int)fn_801C9B50,0,(int)lbl_80560900);
}
void *fn_801C9B30(){return fn_801C9958();}
}
#pragma pop
