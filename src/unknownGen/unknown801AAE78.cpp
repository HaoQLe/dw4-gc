#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801AACF4();
void fn_801AAD30();
void fn_801AAF40();
void fn_801B1534();
extern char lbl_804AB480[];
extern char lbl_804AB490[];
extern void *lbl_80564680;
extern void *lbl_805648F8;
void fn_801AAEA0();
void *fn_801AAF18();
void *fn_801AAF38();
}
extern "C" {
void fn_801AAE78(){
 fn_80066188((int)fn_801AAEA0);
}
void fn_801AAEA0(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564680,(int)fn_801B1534,(int)fn_801AAF38,(int)fn_801AAF18,(int)lbl_804AB490,24,(int)fn_801AAD30,(int)fn_801AAF40,0,(int)lbl_804AB480);
}
void *fn_801AAF18(){return fn_801AACF4();}
void *fn_801AAF38(){return lbl_805648F8;}
}
#pragma pop
