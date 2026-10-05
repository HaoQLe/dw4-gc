#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_800CB530();
void fn_801AA6DC();
void *fn_801C85A8();
void fn_801C85E4();
void fn_801C875C();
void fn_80217664();
extern char lbl_804B1830[];
extern char lbl_804B1840[];
extern void *lbl_80565350;
void fn_801C86C4();
void *fn_801C873C();
}
extern "C" {
void fn_801C869C(){
 fn_80066188((int)fn_801C86C4);
}
void fn_801C86C4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565350,(int)fn_80217664,(int)fn_800CB530,(int)fn_801C873C,(int)lbl_804B1840,52,(int)fn_801C85E4,(int)fn_801C875C,0,(int)lbl_804B1830);
}
void *fn_801C873C(){return fn_801C85A8();}
}
#pragma pop
