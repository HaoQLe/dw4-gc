#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
void *fn_8032CC6C();
void fn_8032CCB8();
void fn_8032D02C();
void fn_80333D3C();
extern char lbl_80453850[];
extern char lbl_804E1BD8[];
extern char lbl_80535E2C[];
void fn_8032CF90();
void *fn_8032D00C();
}
extern "C" {
void fn_8032CF68(){
 fn_80066188((int)fn_8032CF90);
}
void fn_8032CF90(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E2C,(int)fn_80333D3C,(int)fn_8032BD54,(int)fn_8032D00C,(int)lbl_80453850,100,(int)fn_8032CCB8,(int)fn_8032D02C,0,(int)lbl_804E1BD8);
}
void *fn_8032D00C(){return fn_8032CC6C();}
}
#pragma pop
