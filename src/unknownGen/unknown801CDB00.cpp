#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801CD8EC();
void fn_801CD928();
void fn_801CDBC0();
extern char lbl_804B2990[];
extern char lbl_804B29A8[];
extern void *lbl_80565584;
void fn_801CDB28();
void *fn_801CDBA0();
}
extern "C" {
void fn_801CDB00(){
 fn_80066188((int)fn_801CDB28);
}
void fn_801CDB28(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565584,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_801CDBA0,(int)lbl_804B29A8,40,(int)fn_801CD928,(int)fn_801CDBC0,0,(int)lbl_804B2990);
}
void *fn_801CDBA0(){return fn_801CD8EC();}
}
#pragma pop
