#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void *fn_80327658();
void fn_803276A4();
void fn_80328720();
extern char lbl_804534B0[];
extern char lbl_80535D4C[];
void fn_803278CC();
void *fn_80327938();
}
extern "C" {
void fn_803278A4(){
 fn_80066188((int)fn_803278CC);
}
void fn_803278CC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D4C,(int)fn_80328720,(int)fn_80326F88,(int)fn_80327938,(int)lbl_804534B0,80,(int)fn_803276A4,0,0,0);
}
void *fn_80327938(){return fn_80327658();}
}
#pragma pop
