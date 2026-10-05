#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B2E34();
void fn_800B2E70();
void fn_800B2FCC();
extern char lbl_80478E30[];
extern char lbl_8055E2E4[8];
extern void *lbl_805626F8;
void fn_800B2F38();
void *fn_800B2FAC();
}
extern "C" {
void fn_800B2F10(){
 fn_80066188((int)fn_800B2F38);
}
void fn_800B2F38(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626F8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B2FAC,(int)lbl_80478E30,48,(int)fn_800B2E70,(int)fn_800B2FCC,0,(int)lbl_8055E2E4);
}
void *fn_800B2FAC(){return fn_800B2E34();}
}
#pragma pop
