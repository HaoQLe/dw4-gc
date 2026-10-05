#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_8033C438();
void fn_8033C484();
void fn_8033C5F8();
extern char lbl_80454824[];
extern char lbl_804E2BCC[];
extern char lbl_8053628C[];
void fn_8033C55C();
void *fn_8033C5D8();
}
extern "C" {
void fn_8033C534(){
 fn_80066188((int)fn_8033C55C);
}
void fn_8033C55C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_8053628C,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_8033C5D8,(int)lbl_80454824,288,(int)fn_8033C484,(int)fn_8033C5F8,0,(int)lbl_804E2BCC);
}
void *fn_8033C5D8(){return fn_8033C438();}
}
#pragma pop
