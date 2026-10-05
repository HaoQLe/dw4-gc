#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802CCE38();
void fn_803250AC();
void *fn_803384B4();
void fn_80338500();
void fn_803386E8();
void fn_803386F8();
extern char lbl_804542D8[];
extern char lbl_804E26E0[];
extern char lbl_80536158[];
void fn_8033864C();
void *fn_803386C8();
}
extern "C" {
void fn_80338624(){
 fn_80066188((int)fn_8033864C);
}
void fn_8033864C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536158,(int)fn_802CCE38,(int)fn_803386E8,(int)fn_803386C8,(int)lbl_804542D8,48,(int)fn_80338500,(int)fn_803386F8,0,(int)lbl_804E26E0);
}
void *fn_803386C8(){return fn_803384B4();}
}
#pragma pop
