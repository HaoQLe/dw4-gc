#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_80284294();
void *fn_80284AB8();
void fn_80284B04();
extern char lbl_804169E0[];
extern char lbl_80515C84[];
void fn_80284B74();
void *fn_80284BE0();
}
extern "C" {
void fn_80284B4C(){
 fn_80066188((int)fn_80284B74);
}
void fn_80284B74(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515C84,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80284BE0,(int)lbl_804169E0,8,(int)fn_80284B04,0,0,0);
}
void *fn_80284BE0(){return fn_80284AB8();}
}
#pragma pop
