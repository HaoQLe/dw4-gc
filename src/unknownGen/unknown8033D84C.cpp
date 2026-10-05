#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_8033D700();
void fn_8033D74C();
void fn_8033D910();
extern char lbl_80454AA0[];
extern char lbl_804E32A0[];
extern char lbl_8053644C[];
void fn_8033D874();
void *fn_8033D8F0();
}
extern "C" {
void fn_8033D84C(){
 fn_80066188((int)fn_8033D874);
}
void fn_8033D874(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053644C,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_8033D8F0,(int)lbl_80454AA0,20,(int)fn_8033D74C,(int)fn_8033D910,0,(int)lbl_804E32A0);
}
void *fn_8033D8F0(){return fn_8033D700();}
}
#pragma pop
