#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802C6C7C();
void fn_803250AC();
void *fn_80338A20();
void *fn_8033A8E8();
void fn_8033A934();
void fn_8033AC44();
extern char lbl_804546C8[];
extern char lbl_804E2A3C[];
extern char lbl_80536204[];
void fn_8033ABA8();
void *fn_8033AC24();
}
extern "C" {
void fn_8033AB80(){
 fn_80066188((int)fn_8033ABA8);
}
void fn_8033ABA8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536204,(int)fn_802C6C7C,(int)fn_80338A20,(int)fn_8033AC24,(int)lbl_804546C8,268,(int)fn_8033A934,(int)fn_8033AC44,0,(int)lbl_804E2A3C);
}
void *fn_8033AC24(){return fn_8033A8E8();}
}
#pragma pop
