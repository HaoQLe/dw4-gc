#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801AAEA0();
void *fn_801BE048();
void fn_801BE084();
void fn_801BE324();
extern char lbl_804AF314[];
extern char lbl_804AF320[];
extern void *lbl_80564680;
extern void *lbl_80564E70;
void fn_801BE284();
void *fn_801BE2FC();
void *fn_801BE31C();
}
extern "C" {
void fn_801BE25C(){
 fn_80066188((int)fn_801BE284);
}
void fn_801BE284(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564E70,(int)fn_801AAEA0,(int)fn_801BE31C,(int)fn_801BE2FC,(int)lbl_804AF320,32,(int)fn_801BE084,(int)fn_801BE324,0,(int)lbl_804AF314);
}
void *fn_801BE2FC(){return fn_801BE048();}
void *fn_801BE31C(){return lbl_80564680;}
}
#pragma pop
