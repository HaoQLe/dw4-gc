#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
void *fn_8032BE44();
void fn_8032BE90();
void fn_8032C204();
void fn_80333D3C();
extern char lbl_804537BC[];
extern char lbl_804E1B3C[];
extern char lbl_80535E00[];
void fn_8032C168();
void *fn_8032C1E4();
}
extern "C" {
void fn_8032C140(){
 fn_80066188((int)fn_8032C168);
}
void fn_8032C168(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E00,(int)fn_80333D3C,(int)fn_8032BD54,(int)fn_8032C1E4,(int)lbl_804537BC,100,(int)fn_8032BE90,(int)fn_8032C204,0,(int)lbl_804E1B3C);
}
void *fn_8032C1E4(){return fn_8032BE44();}
}
#pragma pop
