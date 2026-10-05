#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_802E3D20();
void fn_803250AC();
void *fn_80344BA4();
void fn_80344BF0();
extern char lbl_80455654[];
extern char lbl_80536824[];
void fn_80344D68();
void *fn_80344DD4();
}
extern "C" {
void fn_80344D40(){
 fn_80066188((int)fn_80344D68);
}
void fn_80344D68(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536824,(int)fn_802E3D20,(int)fn_802B2E3C,(int)fn_80344DD4,(int)lbl_80455654,28,(int)fn_80344BF0,0,0,0);
}
void *fn_80344DD4(){return fn_80344BA4();}
}
#pragma pop
