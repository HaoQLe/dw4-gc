#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801ACA90();
void fn_801ACACC();
void fn_801ACD28();
void fn_801ACE44();
extern char lbl_804ABB70[];
extern void *lbl_80564728;
extern void *lbl_80564734;
void fn_801ACC90();
void *fn_801ACD00();
void *fn_801ACD20();
}
extern "C" {
void fn_801ACC68(){
 fn_80066188((int)fn_801ACC90);
}
void fn_801ACC90(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564728,(int)fn_801ACE44,(int)fn_801ACD20,(int)fn_801ACD00,(int)lbl_804ABB70,64,(int)fn_801ACACC,(int)fn_801ACD28,0,0);
}
void *fn_801ACD00(){return fn_801ACA90();}
void *fn_801ACD20(){return lbl_80564734;}
}
#pragma pop
