#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801B76A8();
void *fn_801BBBF0();
void *fn_801C5E74();
void fn_801C5EB0();
void fn_801C6090();
extern char lbl_804B0E8C[];
extern void *lbl_8056520C;
void fn_801C6000();
void *fn_801C6070();
}
extern "C" {
void fn_801C5FD8(){
 fn_80066188((int)fn_801C6000);
}
void fn_801C6000(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056520C,(int)fn_801B76A8,(int)fn_801BBBF0,(int)fn_801C6070,(int)lbl_804B0E8C,56,(int)fn_801C5EB0,(int)fn_801C6090,0,0);
}
void *fn_801C6070(){return fn_801C5E74();}
}
#pragma pop
