#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_8033ECFC();
void fn_8033ED48();
void fn_8033EFAC();
extern char lbl_80454C3C[];
extern char lbl_804E35B8[];
extern char lbl_80536520[];
void fn_8033EF10();
void *fn_8033EF8C();
}
extern "C" {
void fn_8033EEE8(){
 fn_80066188((int)fn_8033EF10);
}
void fn_8033EF10(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536520,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_8033EF8C,(int)lbl_80454C3C,72,(int)fn_8033ED48,(int)fn_8033EFAC,0,(int)lbl_804E35B8);
}
void *fn_8033EF8C(){return fn_8033ECFC();}
}
#pragma pop
