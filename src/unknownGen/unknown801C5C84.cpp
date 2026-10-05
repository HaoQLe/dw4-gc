#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801C5B10();
void fn_801C5B4C();
void fn_801C5D48();
void fn_801C6000();
extern char lbl_804B0E34[];
extern char lbl_805607F0[8];
extern void *lbl_805651FC;
extern void *lbl_8056520C;
void fn_801C5CAC();
void *fn_801C5D20();
void *fn_801C5D40();
}
extern "C" {
void fn_801C5C84(){
 fn_80066188((int)fn_801C5CAC);
}
void fn_801C5CAC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805651FC,(int)fn_801C6000,(int)fn_801C5D40,(int)fn_801C5D20,(int)lbl_804B0E34,68,(int)fn_801C5B4C,(int)fn_801C5D48,0,(int)lbl_805607F0);
}
void *fn_801C5D20(){return fn_801C5B10();}
void *fn_801C5D40(){return lbl_8056520C;}
}
#pragma pop
