#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B2E3C();
void fn_802E3D20();
void fn_803250AC();
void *fn_8033C1A8();
void fn_8033C1F4();
extern char lbl_80454810[];
extern char lbl_80536288[];
void fn_8033C36C();
void *fn_8033C3D8();
}
extern "C" {
void fn_8033C344(){
 fn_80066188((int)fn_8033C36C);
}
void fn_8033C36C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536288,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_8033C3D8,(int)lbl_80454810,28,(int)fn_8033C1F4,0,0,0);
}
void *fn_8033C3D8(){return fn_8033C1A8();}
}
#pragma pop
