#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B6540();
void fn_800B657C();
void fn_800B67C8();
extern char lbl_804795C0[];
extern char lbl_804795D0[];
extern void *lbl_8056285C;
void fn_800B6730();
void *fn_800B67A8();
}
extern "C" {
void fn_800B6708(){
 fn_80066188((int)fn_800B6730);
}
void fn_800B6730(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056285C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B67A8,(int)lbl_804795D0,44,(int)fn_800B657C,(int)fn_800B67C8,0,(int)lbl_804795C0);
}
void *fn_800B67A8(){return fn_800B6540();}
}
#pragma pop
