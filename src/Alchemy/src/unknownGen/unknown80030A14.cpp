#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002942C();
void *fn_80030870();
void fn_800308AC();
void fn_80030AD0();
void fn_80032D80();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_8046604C[];
extern char lbl_8055D4B4[8];
extern void *lbl_80561B8C;
void fn_80030A3C();
void *fn_80030AB0();
}
extern "C" {
void fn_80030A14(){
 fn_80066188((int)fn_80030A3C);
}
void fn_80030A3C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561B8C,(int)fn_80032D80,(int)fn_8002942C,(int)fn_80030AB0,(int)lbl_8046604C,44,(int)fn_800308AC,(int)fn_80030AD0,0,(int)lbl_8055D4B4);
}
void *fn_80030AB0(){return fn_80030870();}
}
#pragma pop
