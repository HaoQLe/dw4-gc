#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80285E14();
void fn_802AD8A0();
void fn_803250AC();
void *fn_803250E0();
void fn_8032512C();
void fn_803256F4();
extern char lbl_804530B0[];
extern char lbl_804E1500[];
extern char lbl_80535C20[];
void fn_80325658();
void *fn_803256D4();
}
extern "C" {
void fn_80325630(){
 fn_80066188((int)fn_80325658);
}
void fn_80325658(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535C20,(int)fn_80285E14,(int)fn_802AD8A0,(int)fn_803256D4,(int)lbl_804530B0,92,(int)fn_8032512C,(int)fn_803256F4,0,(int)lbl_804E1500);
}
void *fn_803256D4(){return fn_803250E0();}
}
#pragma pop
