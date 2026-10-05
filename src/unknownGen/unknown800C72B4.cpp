#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800C6F28();
void fn_800C7034();
void *fn_800C714C();
void fn_800C71A8();
void fn_800C735C();
extern char lbl_8047E87C[];
extern char lbl_8047E88C[];
extern void *lbl_80562B24;
extern void *lbl_80562B40;
void fn_800C72DC();
void *fn_800C7354();
}
extern "C" {
void fn_800C72B4(){
 fn_80066188((int)fn_800C72DC);
}
void fn_800C72DC(){
 fn_800C6F28();
 fn_80066204(0,(int)&lbl_80562B40,(int)fn_800C7034,(int)fn_800C7354,(int)fn_800C714C,(int)lbl_8047E88C,40,(int)fn_800C71A8,(int)fn_800C735C,0,(int)lbl_8047E87C);
}
void *fn_800C7354(){return lbl_80562B24;}
}
#pragma pop
