#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B2E3C();
void fn_802E3D20();
void fn_803250AC();
void *fn_8033E920();
void fn_8033E96C();
void fn_8033EBC8();
extern char lbl_80454C18[];
extern char lbl_804E35A0[];
extern char lbl_80536518[];
void fn_8033EB2C();
void *fn_8033EBA8();
}
extern "C" {
void fn_8033EB04(){
 fn_80066188((int)fn_8033EB2C);
}
void fn_8033EB2C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536518,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_8033EBA8,(int)lbl_80454C18,32,(int)fn_8033E96C,(int)fn_8033EBC8,0,(int)lbl_804E35A0);
}
void *fn_8033EBA8(){return fn_8033E920();}
}
#pragma pop
