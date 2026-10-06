#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800AF1A4();
void fn_800AF1E0();
void fn_800AF3B4();
void fn_800AF44C();
extern char lbl_80478520[];
extern char lbl_8055E030[8];
extern void *lbl_80562548;
void fn_800AF31C();
void *fn_800AF394();
}
extern "C" {
void fn_800AF2F4(){
 fn_80066188((int)fn_800AF31C);
}
void fn_800AF31C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562548,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AF394,(int)lbl_80478520,20,(int)fn_800AF1E0,(int)fn_800AF3B4,(int)fn_800AF44C,(int)lbl_8055E030);
}
void *fn_800AF394(){return fn_800AF1A4();}
}
#pragma pop
