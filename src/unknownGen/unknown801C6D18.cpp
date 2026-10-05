#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801C6BA4();
void fn_801C6BE0();
void fn_801C6DD8();
extern char lbl_804B1294[];
extern char lbl_804B12A8[];
extern void *lbl_80565298;
void fn_801C6D40();
void *fn_801C6DB8();
}
extern "C" {
void fn_801C6D18(){
 fn_80066188((int)fn_801C6D40);
}
void fn_801C6D40(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565298,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801C6DB8,(int)lbl_804B12A8,40,(int)fn_801C6BE0,(int)fn_801C6DD8,0,(int)lbl_804B1294);
}
void *fn_801C6DB8(){return fn_801C6BA4();}
}
#pragma pop
