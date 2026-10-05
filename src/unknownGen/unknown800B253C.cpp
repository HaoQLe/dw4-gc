#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800B2460();
void fn_800B249C();
void fn_800B25F8();
extern char lbl_80478CE8[];
extern char lbl_8055E2A0[8];
extern void *lbl_805626B8;
void fn_800B2564();
void *fn_800B25D8();
}
extern "C" {
void fn_800B253C(){
 fn_80066188((int)fn_800B2564);
}
void fn_800B2564(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626B8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B25D8,(int)lbl_80478CE8,16,(int)fn_800B249C,(int)fn_800B25F8,0,(int)lbl_8055E2A0);
}
void *fn_800B25D8(){return fn_800B2460();}
}
#pragma pop
