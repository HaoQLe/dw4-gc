#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_8032B8A4();
void *fn_8032E090();
void fn_8032E0DC();
void fn_8032E468();
void fn_80333F14();
extern char lbl_80453938[];
extern char lbl_804E1C8C[];
extern char lbl_80535E68[];
void fn_8032E3CC();
void *fn_8032E448();
}
extern "C" {
void fn_8032E3A4(){
 fn_80066188((int)fn_8032E3CC);
}
void fn_8032E3CC(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E68,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_8032E448,(int)lbl_80453938,92,(int)fn_8032E0DC,(int)fn_8032E468,0,(int)lbl_804E1C8C);
}
void *fn_8032E448(){return fn_8032E090();}
}
#pragma pop
