#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80328C10();
void *fn_80329CF4();
void fn_80329D40();
void fn_80329F30();
void fn_8032A928();
extern char lbl_804535D8[];
extern char lbl_80535D88[];
void fn_80329E9C();
void *fn_80329F10();
}
extern "C" {
void fn_80329E74(){
 fn_80066188((int)fn_80329E9C);
}
void fn_80329E9C(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D88,(int)fn_8032A928,(int)fn_80328C10,(int)fn_80329F10,(int)lbl_804535D8,116,(int)fn_80329D40,(int)fn_80329F30,0,0);
}
void *fn_80329F10(){return fn_80329CF4();}
}
#pragma pop
