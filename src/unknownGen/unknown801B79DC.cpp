#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801B1B8C();
void *fn_801B7860();
void fn_801B789C();
void fn_801B7AA0();
extern char lbl_804ADEA8[];
extern char lbl_805603CC[8];
extern void *lbl_8056491C;
extern void *lbl_80564BD4;
void fn_801B7A04();
void *fn_801B7A78();
void *fn_801B7A98();
}
extern "C" {
void fn_801B79DC(){
 fn_80066188((int)fn_801B7A04);
}
void fn_801B7A04(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BD4,(int)fn_801B1B8C,(int)fn_801B7A98,(int)fn_801B7A78,(int)lbl_804ADEA8,72,(int)fn_801B789C,(int)fn_801B7AA0,0,(int)lbl_805603CC);
}
void *fn_801B7A78(){return fn_801B7860();}
void *fn_801B7A98(){return lbl_8056491C;}
}
#pragma pop
