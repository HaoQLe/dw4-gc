#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80325C6C();
void fn_803287A8();
void *fn_80333EA0();
void fn_80333FA4();
extern char lbl_80453D64[];
extern char lbl_80535FAC[];
void fn_80333F14();
void *fn_80333F84();
}
extern "C" {
void fn_80333EEC(){
 fn_80066188((int)fn_80333F14);
}
void fn_80333F14(){
 fn_803250AC();
 fn_80066204(1,(int)lbl_80535FAC,(int)fn_80325C6C,(int)fn_803287A8,(int)fn_80333F84,(int)lbl_80453D64,84,0,(int)fn_80333FA4,0,0);
}
void *fn_80333F84(){return fn_80333EA0();}
}
#pragma pop
