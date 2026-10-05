#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801AD7BC();
void fn_801B09E4();
void *fn_801B4A64();
void fn_801B4AA0();
void fn_801B4C6C();
extern char lbl_804AD478[];
extern char lbl_804AD488[];
extern void *lbl_80564A4C;
void fn_801B4BD4();
void *fn_801B4C4C();
}
extern "C" {
void fn_801B4BAC(){
 fn_80066188((int)fn_801B4BD4);
}
void fn_801B4BD4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A4C,(int)fn_801B09E4,(int)fn_801AD7BC,(int)fn_801B4C4C,(int)lbl_804AD488,72,(int)fn_801B4AA0,(int)fn_801B4C6C,0,(int)lbl_804AD478);
}
void *fn_801B4C4C(){return fn_801B4A64();}
}
#pragma pop
