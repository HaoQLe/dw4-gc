#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801AB354();
void *fn_801ABB34();
void fn_801C9F0C();
extern char lbl_804B1F84[];
extern void *lbl_80565428;
extern void *lbl_8056542C;
void *fn_801C9CF0();
void fn_801C9D2C();
void fn_801C9D54();
void *fn_801C9DB8();
}
extern "C" {
void *fn_801C9CF0(){
 if(!lbl_80565428 || !(reinterpret_cast<unsigned int *>(lbl_80565428)[0x24/4]&4)) fn_801C9D2C();
 return lbl_80565428;
}
void fn_801C9D2C(){
 fn_80066188((int)fn_801C9D54);
}
void fn_801C9D54(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80565428,(int)fn_801AB354,(int)fn_801ABB34,(int)fn_801C9DB8,(int)lbl_804B1F84,8,0,0,0,0);
}
void *fn_801C9DB8(){return fn_801C9CF0();}
void *fn_801C9DD8(){
 if(!lbl_8056542C || !(reinterpret_cast<unsigned int *>(lbl_8056542C)[0x24/4]&4)) fn_801C9F0C();
 return lbl_8056542C;
}
}
#pragma pop
