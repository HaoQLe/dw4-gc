#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802CCE38();
void fn_803250AC();
void *fn_803386E8();
void *fn_80339FEC();
void fn_8033A038();
extern char lbl_80454680[];
extern char lbl_805361F0[];
void fn_8033A184();
void *fn_8033A1F0();
}
extern "C" {
void fn_8033A15C(){
 fn_80066188((int)fn_8033A184);
}
void fn_8033A184(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805361F0,(int)fn_802CCE38,(int)fn_803386E8,(int)fn_8033A1F0,(int)lbl_80454680,44,(int)fn_8033A038,0,0,0);
}
void *fn_8033A1F0(){return fn_80339FEC();}
}
#pragma pop
