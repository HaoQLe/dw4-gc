#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800CE39C();
void fn_800CE3D8();
void fn_800CE530();
void fn_800D5908();
extern char lbl_80487F50[];
extern char lbl_8055EA40[8];
extern void *lbl_80562CF4;
extern void *lbl_805630B8;
void fn_800CE494();
void *fn_800CE508();
void *fn_800CE528();
}
extern "C" {
void fn_800CE46C(){
 fn_80066188((int)fn_800CE494);
}
void fn_800CE494(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562CF4,(int)fn_800D5908,(int)fn_800CE528,(int)fn_800CE508,(int)lbl_80487F50,12,(int)fn_800CE3D8,(int)fn_800CE530,0,(int)lbl_8055EA40);
}
void *fn_800CE508(){return fn_800CE39C();}
void *fn_800CE528(){return lbl_805630B8;}
}
#pragma pop
