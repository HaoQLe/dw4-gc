#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801B76A8();
void *fn_801BBBF0();
void *fn_801BC334();
void fn_801BC370();
void fn_801BC594();
extern char lbl_804AEE28[];
extern char lbl_8056051C[8];
extern void *lbl_80564DD8;
void fn_801BC500();
void *fn_801BC574();
}
extern "C" {
void fn_801BC4D8(){
 fn_80066188((int)fn_801BC500);
}
void fn_801BC500(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DD8,(int)fn_801B76A8,(int)fn_801BBBF0,(int)fn_801BC574,(int)lbl_804AEE28,32,(int)fn_801BC370,(int)fn_801BC594,0,(int)lbl_8056051C);
}
void *fn_801BC574(){return fn_801BC334();}
}
#pragma pop
