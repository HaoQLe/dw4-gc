#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801AFF38();
void fn_801AFF74();
void fn_801B00C4();
extern char lbl_804AC8C8[];
extern void *lbl_805648A8;
void fn_801B0034();
void *fn_801B00A4();
}
extern "C" {
void fn_801B000C(){
 fn_80066188((int)fn_801B0034);
}
void fn_801B0034(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648A8,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_801B00A4,(int)lbl_804AC8C8,24,(int)fn_801AFF74,(int)fn_801B00C4,0,0);
}
void *fn_801B00A4(){return fn_801AFF38();}
}
#pragma pop
