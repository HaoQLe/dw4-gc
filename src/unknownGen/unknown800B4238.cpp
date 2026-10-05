#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B419C();
void fn_800B41D8();
void fn_800B42F8();
void *fn_800B43D8();
extern char lbl_804790E8[];
extern void *lbl_8056276C;
void fn_800B4260();
void *fn_800B42D8();
}
extern "C" {
void fn_800B4238(){
 fn_80066188((int)fn_800B4260);
}
void fn_800B4260(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056276C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B42D8,(int)lbl_804790E8,76,(int)fn_800B41D8,(int)fn_800B42F8,(int)fn_800B43D8,0);
}
void *fn_800B42D8(){return fn_800B419C();}
}
#pragma pop
