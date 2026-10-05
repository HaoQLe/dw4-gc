#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void *fn_80151580();
void fn_801515BC();
void fn_801517A4();
extern char lbl_804A001C[];
extern void *lbl_80564504;
void fn_80151714();
void *fn_80151784();
}
extern "C" {
void fn_801516EC(){
 fn_80066188((int)fn_80151714);
}
void fn_80151714(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564504,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80151784,(int)lbl_804A001C,60,(int)fn_801515BC,(int)fn_801517A4,0,0);
}
void *fn_80151784(){return fn_80151580();}
}
#pragma pop
