#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B06C8();
void fn_800B0704();
void fn_800B08D4();
extern char lbl_8047883C[];
extern char lbl_8055E158[8];
extern void *lbl_805625F4;
void fn_800B0840();
void *fn_800B08B4();
}
extern "C" {
void fn_800B0818(){
 fn_80066188((int)fn_800B0840);
}
void fn_800B0840(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805625F4,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B08B4,(int)lbl_8047883C,32,(int)fn_800B0704,(int)fn_800B08D4,0,(int)lbl_8055E158);
}
void *fn_800B08B4(){return fn_800B06C8();}
}
#pragma pop
