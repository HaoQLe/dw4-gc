#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B500();
void fn_8032B54C();
void fn_8032B8A4();
void fn_8032B8B4();
void fn_80333F14();
extern char lbl_80453764[];
extern char lbl_804E1AEC[];
extern char lbl_80535DE8[];
void fn_8032B808();
void *fn_8032B884();
}
extern "C" {
void fn_8032B7E0(){
 fn_80066188((int)fn_8032B808);
}
void fn_8032B808(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535DE8,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032B884,(int)lbl_80453764,96,(int)fn_8032B54C,(int)fn_8032B8B4,0,(int)lbl_804E1AEC);
}
void *fn_8032B884(){return fn_8032B500();}
}
#pragma pop
