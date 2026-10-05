#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802C6C7C();
void fn_803250AC();
void fn_80338A20();
void *fn_80339750();
void fn_8033979C();
void fn_803398B0();
extern char lbl_804545BC[];
extern char lbl_804E2960[];
extern char lbl_805361BC[];
void fn_80339814();
void *fn_80339890();
}
extern "C" {
void fn_803397EC(){
 fn_80066188((int)fn_80339814);
}
void fn_80339814(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805361BC,(int)fn_802C6C7C,(int)fn_80338A20,(int)fn_80339890,(int)lbl_804545BC,276,(int)fn_8033979C,(int)fn_803398B0,0,(int)lbl_804E2960);
}
void *fn_80339890(){return fn_80339750();}
}
#pragma pop
