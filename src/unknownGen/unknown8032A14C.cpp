#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80328C10();
void *fn_8032A004();
void fn_8032A050();
void fn_8032A928();
extern char lbl_804535F8[];
extern char lbl_80535D90[];
void fn_8032A174();
void *fn_8032A1E0();
}
extern "C" {
void fn_8032A14C(){
 fn_80066188((int)fn_8032A174);
}
void fn_8032A174(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D90,(int)fn_8032A928,(int)fn_80328C10,(int)fn_8032A1E0,(int)lbl_804535F8,112,(int)fn_8032A050,0,0,0);
}
void *fn_8032A1E0(){return fn_8032A004();}
}
#pragma pop
