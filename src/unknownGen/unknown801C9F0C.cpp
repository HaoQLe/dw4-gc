#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801C9DD8();
void fn_801C9E14();
void fn_801C9FC8();
extern char lbl_804B1F98[];
extern char lbl_80560924[8];
extern void *lbl_8056542C;
void fn_801C9F34();
void *fn_801C9FA8();
}
extern "C" {
void fn_801C9F0C(){
 fn_80066188((int)fn_801C9F34);
}
void fn_801C9F34(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056542C,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_801C9FA8,(int)lbl_804B1F98,24,(int)fn_801C9E14,(int)fn_801C9FC8,0,(int)lbl_80560924);
}
void *fn_801C9FA8(){return fn_801C9DD8();}
}
#pragma pop
