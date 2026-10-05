#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801B76A8();
void *fn_801BBBF0();
void *fn_801BF76C();
void fn_801BF7A8();
void fn_801BF9C8();
extern char lbl_80560608[8];
extern char lbl_80560610[8];
extern void *lbl_80564ED0;
void fn_801BF938();
void *fn_801BF9A8();
}
extern "C" {
void fn_801BF910(){
 fn_80066188((int)fn_801BF938);
}
void fn_801BF938(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564ED0,(int)fn_801B76A8,(int)fn_801BBBF0,(int)fn_801BF9A8,(int)lbl_80560610,32,(int)fn_801BF7A8,(int)fn_801BF9C8,0,(int)lbl_80560608);
}
void *fn_801BF9A8(){return fn_801BF76C();}
}
#pragma pop
