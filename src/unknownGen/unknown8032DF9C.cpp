#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_8032B8A4();
void *fn_8032DD50();
void fn_8032DD9C();
void fn_80333F14();
extern char lbl_80453924[];
extern char lbl_80535E64[];
void fn_8032DFC4();
void *fn_8032E030();
}
extern "C" {
void fn_8032DF9C(){
 fn_80066188((int)fn_8032DFC4);
}
void fn_8032DFC4(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E64,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032E030,(int)lbl_80453924,84,(int)fn_8032DD9C,0,0,0);
}
void *fn_8032E030(){return fn_8032DD50();}
}
#pragma pop
