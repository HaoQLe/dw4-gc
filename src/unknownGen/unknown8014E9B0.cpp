#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_8014E7F4();
void fn_8014E830();
void fn_8014EA6C();
extern char lbl_8049FC14[];
extern char lbl_8055FC30[8];
extern void *lbl_8056446C;
void fn_8014E9D8();
void *fn_8014EA4C();
}
extern "C" {
void fn_8014E9B0(){
 fn_80066188((int)fn_8014E9D8);
}
void fn_8014E9D8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056446C,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8014EA4C,(int)lbl_8049FC14,52,(int)fn_8014E830,(int)fn_8014EA6C,0,(int)lbl_8055FC30);
}
void *fn_8014EA4C(){return fn_8014E7F4();}
}
#pragma pop
