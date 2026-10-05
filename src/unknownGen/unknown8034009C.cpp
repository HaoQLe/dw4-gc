#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_8033FD10();
void *fn_8033FFFC();
void fn_80340048();
void fn_803401C4();
extern char lbl_80454E58[];
extern char lbl_80536600[];
void fn_803400C4();
void *fn_80340130();
}
extern "C" {
void fn_8034009C(){
 fn_80066188((int)fn_803400C4);
}
void fn_803400C4(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536600,(int)fn_803401C4,(int)fn_8033FD10,(int)fn_80340130,(int)lbl_80454E58,24,(int)fn_80340048,0,0,0);
}
void *fn_80340130(){return fn_8033FFFC();}
}
#pragma pop
