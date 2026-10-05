#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B381C();
void fn_802E3908();
void fn_803250AC();
void *fn_8033BE38();
void fn_8033BE84();
void fn_8033C0A0();
extern char lbl_804547B4[];
extern char lbl_804E2B0C[];
extern char lbl_80536258[];
void fn_8033C004();
void *fn_8033C080();
}
extern "C" {
void fn_8033BFDC(){
 fn_80066188((int)fn_8033C004);
}
void fn_8033C004(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536258,(int)fn_802E3908,(int)fn_802B381C,(int)fn_8033C080,(int)lbl_804547B4,92,(int)fn_8033BE84,(int)fn_8033C0A0,0,(int)lbl_804E2B0C);
}
void *fn_8033C080(){return fn_8033BE38();}
}
#pragma pop
