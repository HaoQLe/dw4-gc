#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801CA81C();
void fn_801CA858();
void fn_801CA99C();
extern char lbl_804B2074[];
extern char lbl_80560994[8];
extern void *lbl_80565454;
void fn_801CA908();
void *fn_801CA97C();
}
extern "C" {
void fn_801CA8E0(){
 fn_80066188((int)fn_801CA908);
}
void fn_801CA908(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565454,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801CA97C,(int)lbl_804B2074,20,(int)fn_801CA858,(int)fn_801CA99C,0,(int)lbl_80560994);
}
void *fn_801CA97C(){return fn_801CA81C();}
}
#pragma pop
