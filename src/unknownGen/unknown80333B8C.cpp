#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void *fn_80333940();
void fn_8033398C();
void fn_80333C48();
void fn_80333F14();
extern char lbl_80453D1C[];
extern char lbl_80535F94[];
void fn_80333BB4();
void *fn_80333C28();
}
extern "C" {
void fn_80333B8C(){
 fn_80066188((int)fn_80333BB4);
}
void fn_80333BB4(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535F94,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_80333C28,(int)lbl_80453D1C,88,(int)fn_8033398C,(int)fn_80333C48,0,0);
}
void *fn_80333C28(){return fn_80333940();}
}
#pragma pop
