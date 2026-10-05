#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B381C();
void fn_802E3908();
void fn_803250AC();
void *fn_80342118();
void fn_80342164();
void fn_80342380();
extern char lbl_804550E0[];
extern char lbl_804E3CC8[];
extern char lbl_80536718[];
void fn_803422E4();
void *fn_80342360();
}
extern "C" {
void fn_803422BC(){
 fn_80066188((int)fn_803422E4);
}
void fn_803422E4(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536718,(int)fn_802E3908,(int)fn_802B381C,(int)fn_80342360,(int)lbl_804550E0,44,(int)fn_80342164,(int)fn_80342380,0,(int)lbl_804E3CC8);
}
void *fn_80342360(){return fn_80342118();}
}
#pragma pop
