#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801B8EE8();
void fn_801B8F24();
void fn_801B911C();
extern char lbl_804AE564[];
extern char lbl_804AE574[];
extern void *lbl_80564C88;
void fn_801B9084();
void *fn_801B90FC();
}
extern "C" {
void fn_801B905C(){
 fn_80066188((int)fn_801B9084);
}
void fn_801B9084(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564C88,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801B90FC,(int)lbl_804AE574,80,(int)fn_801B8F24,(int)fn_801B911C,0,(int)lbl_804AE564);
}
void *fn_801B90FC(){return fn_801B8EE8();}
}
#pragma pop
