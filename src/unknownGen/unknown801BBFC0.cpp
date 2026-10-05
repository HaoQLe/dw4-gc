#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801AC8D0();
void *fn_801BBCCC();
void fn_801BBD08();
void fn_801BC080();
extern char lbl_805604E4[8];
extern char lbl_805604EC[8];
extern void *lbl_80564714;
extern void *lbl_80564DBC;
void fn_801BBFE8();
void *fn_801BC058();
void *fn_801BC078();
}
extern "C" {
void fn_801BBFC0(){
 fn_80066188((int)fn_801BBFE8);
}
void fn_801BBFE8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DBC,(int)fn_801AC8D0,(int)fn_801BC078,(int)fn_801BC058,(int)lbl_805604EC,176,(int)fn_801BBD08,(int)fn_801BC080,0,(int)lbl_805604E4);
}
void *fn_801BC058(){return fn_801BBCCC();}
void *fn_801BC078(){return lbl_80564714;}
}
#pragma pop
