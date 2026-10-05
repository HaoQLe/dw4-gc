#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B040C();
void fn_801B0448();
void fn_801B07DC();
void fn_801B1718();
extern char lbl_804AC92C[];
extern char lbl_804AC940[];
extern void *lbl_805648BC;
extern void *lbl_8056490C;
void fn_801B073C();
void *fn_801B07B4();
void *fn_801B07D4();
}
extern "C" {
void fn_801B0714(){
 fn_80066188((int)fn_801B073C);
}
void fn_801B073C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648BC,(int)fn_801B1718,(int)fn_801B07D4,(int)fn_801B07B4,(int)lbl_804AC940,52,(int)fn_801B0448,(int)fn_801B07DC,0,(int)lbl_804AC92C);
}
void *fn_801B07B4(){return fn_801B040C();}
void *fn_801B07D4(){return lbl_8056490C;}
}
#pragma pop
