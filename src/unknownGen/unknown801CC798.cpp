#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801CC5D4();
void fn_801CC610();
void fn_801CC858();
extern char lbl_804B269C[];
extern char lbl_804B26B0[];
extern void *lbl_80565510;
void fn_801CC7C0();
void *fn_801CC838();
}
extern "C" {
void fn_801CC798(){
 fn_80066188((int)fn_801CC7C0);
}
void fn_801CC7C0(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565510,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_801CC838,(int)lbl_804B26B0,64,(int)fn_801CC610,(int)fn_801CC858,0,(int)lbl_804B269C);
}
void *fn_801CC838(){return fn_801CC5D4();}
}
#pragma pop
