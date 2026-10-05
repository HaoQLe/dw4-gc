#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_8032B8A4();
void *fn_80331F9C();
void fn_80331FE8();
void fn_803322A4();
void fn_80333F14();
extern char lbl_80453B68[];
extern char lbl_80535F28[];
void fn_80332210();
void *fn_80332284();
}
extern "C" {
void fn_803321E8(){
 fn_80066188((int)fn_80332210);
}
void fn_80332210(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535F28,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_80332284,(int)lbl_80453B68,88,(int)fn_80331FE8,(int)fn_803322A4,0,0);
}
void *fn_80332284(){return fn_80331F9C();}
}
#pragma pop
