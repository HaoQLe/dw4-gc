#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80343158();
void *fn_803431A8();
void fn_803431F4();
void fn_80343388();
extern char lbl_804551A4[];
extern char lbl_80536750[];
void fn_80343288();
void *fn_803432F4();
}
extern "C" {
void fn_80343260(){
 fn_80066188((int)fn_80343288);
}
void fn_80343288(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536750,(int)fn_80343388,(int)fn_80343158,(int)fn_803432F4,(int)lbl_804551A4,28,(int)fn_803431F4,0,0,0);
}
void *fn_803432F4(){return fn_803431A8();}
}
#pragma pop
