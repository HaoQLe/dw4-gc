#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801AC8D0();
void *fn_801BC078();
void *fn_801BCCB8();
void fn_801BCCF4();
void fn_801BD0D0();
extern char lbl_804AEF0C[];
extern char lbl_804AEF18[];
extern void *lbl_80564DF8;
void fn_801BD038();
void *fn_801BD0B0();
}
extern "C" {
void fn_801BD010(){
 fn_80066188((int)fn_801BD038);
}
void fn_801BD038(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DF8,(int)fn_801AC8D0,(int)fn_801BC078,(int)fn_801BD0B0,(int)lbl_804AEF18,184,(int)fn_801BCCF4,(int)fn_801BD0D0,0,(int)lbl_804AEF0C);
}
void *fn_801BD0B0(){return fn_801BCCB8();}
}
#pragma pop
