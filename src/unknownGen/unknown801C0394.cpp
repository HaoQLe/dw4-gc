#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B623C();
void *fn_801C0148();
void fn_801C0184();
void fn_801C0454();
void *fn_801C0564();
void fn_801C8C48();
extern char lbl_804AF56C[];
extern char lbl_80560650[8];
extern void *lbl_80564EF0;
void fn_801C03BC();
void *fn_801C0434();
}
extern "C" {
void fn_801C0394(){
 fn_80066188((int)fn_801C03BC);
}
void fn_801C03BC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EF0,(int)fn_801C8C48,(int)fn_801B623C,(int)fn_801C0434,(int)lbl_804AF56C,44,(int)fn_801C0184,(int)fn_801C0454,(int)fn_801C0564,(int)lbl_80560650);
}
void *fn_801C0434(){return fn_801C0148();}
}
#pragma pop
