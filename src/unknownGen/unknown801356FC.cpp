#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80135580();
void fn_801355BC();
void fn_801357C0();
void fn_801358DC();
extern char lbl_8049C8CC[];
extern char lbl_8055F60C[8];
extern void *lbl_80563C88;
extern void *lbl_80563C90;
void fn_80135724();
void *fn_80135798();
void *fn_801357B8();
}
extern "C" {
void fn_801356FC(){
 fn_80066188((int)fn_80135724);
}
void fn_80135724(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C88,(int)fn_801358DC,(int)fn_801357B8,(int)fn_80135798,(int)lbl_8049C8CC,44,(int)fn_801355BC,(int)fn_801357C0,0,(int)lbl_8055F60C);
}
void *fn_80135798(){return fn_80135580();}
void *fn_801357B8(){return lbl_80563C90;}
}
#pragma pop
