#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8033FB70();
void fn_8033FBBC();
void *fn_8033FD10();
void fn_8033FD20();
void fn_803401C4();
extern char lbl_80454E18[];
extern char lbl_805365EC[];
void fn_8033FC7C();
void *fn_8033FCF0();
}
extern "C" {
void fn_8033FC54(){
 fn_80066188((int)fn_8033FC7C);
}
void fn_8033FC7C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805365EC,(int)fn_803401C4,(int)fn_8033FD10,(int)fn_8033FCF0,(int)lbl_80454E18,28,(int)fn_8033FBBC,(int)fn_8033FD20,0,0);
}
void *fn_8033FCF0(){return fn_8033FB70();}
}
#pragma pop
