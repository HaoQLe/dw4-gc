#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_803419D8();
void fn_80341A24();
void fn_80341B98();
extern char lbl_80455088[];
extern char lbl_804E3C2C[];
extern char lbl_805366E8[];
void fn_80341AFC();
void *fn_80341B78();
}
extern "C" {
void fn_80341AD4(){
 fn_80066188((int)fn_80341AFC);
}
void fn_80341AFC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805366E8,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_80341B78,(int)lbl_80455088,24,(int)fn_80341A24,(int)fn_80341B98,0,(int)lbl_804E3C2C);
}
void *fn_80341B78(){return fn_803419D8();}
}
#pragma pop
