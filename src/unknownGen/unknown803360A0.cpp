#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_80335FA4();
void fn_80335FF0();
void fn_8033615C();
extern char lbl_80454020[];
extern char lbl_80536068[];
void fn_803360C8();
void *fn_8033613C();
}
extern "C" {
void fn_803360A0(){
 fn_80066188((int)fn_803360C8);
}
void fn_803360C8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536068,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_8033613C,(int)lbl_80454020,44,(int)fn_80335FF0,(int)fn_8033615C,0,0);
}
void *fn_8033613C(){return fn_80335FA4();}
}
#pragma pop
