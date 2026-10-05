#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802CCE38();
void fn_803250AC();
void fn_803386E8();
void *fn_8033A2A4();
void fn_8033A2F0();
extern char lbl_80454694[];
extern char lbl_805361F4[];
void fn_8033A43C();
void *fn_8033A4A8();
}
extern "C" {
void fn_8033A414(){
 fn_80066188((int)fn_8033A43C);
}
void fn_8033A43C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805361F4,(int)fn_802CCE38,(int)fn_803386E8,(int)fn_8033A4A8,(int)lbl_80454694,44,(int)fn_8033A2F0,0,0,0);
}
void *fn_8033A4A8(){return fn_8033A2A4();}
}
#pragma pop
