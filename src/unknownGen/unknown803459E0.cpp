#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80286F0C();
void fn_803250AC();
void *fn_803457F4();
void fn_80345840();
void fn_80345AA4();
extern char lbl_804556EC[];
extern char lbl_804E41C8[];
extern char lbl_8053684C[];
void fn_80345A08();
void *fn_80345A84();
}
extern "C" {
void fn_803459E0(){
 fn_80066188((int)fn_80345A08);
}
void fn_80345A08(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053684C,(int)fn_80286F0C,(int)fn_80284550,(int)fn_80345A84,(int)lbl_804556EC,40,(int)fn_80345840,(int)fn_80345AA4,0,(int)lbl_804E41C8);
}
void *fn_80345A84(){return fn_803457F4();}
}
#pragma pop
