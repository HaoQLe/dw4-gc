#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void *fn_800AE470();
void fn_800AE4AC();
void fn_800AE6D4();
extern char lbl_80478240[];
extern char lbl_8055DFD8[8];
extern void *lbl_805624FC;
void fn_800AE640();
void *fn_800AE6B4();
}
extern "C" {
void fn_800AE618(){
 fn_80066188((int)fn_800AE640);
}
void fn_800AE640(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624FC,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_800AE6B4,(int)lbl_80478240,24,(int)fn_800AE4AC,(int)fn_800AE6D4,0,(int)lbl_8055DFD8);
}
void *fn_800AE6B4(){return fn_800AE470();}
}
#pragma pop
