#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8010CBD4();
void *fn_8010D0F4();
void fn_8010D130();
void fn_8010D3F4();
void fn_801120FC();
extern char lbl_80494648[];
extern char lbl_80494654[];
extern void *lbl_80563584;
extern void *lbl_80563770;
void fn_8010D354();
void *fn_8010D3CC();
void *fn_8010D3EC();
}
extern "C" {
void fn_8010D32C(){
 fn_80066188((int)fn_8010D354);
}
void fn_8010D354(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563584,(int)fn_801120FC,(int)fn_8010D3EC,(int)fn_8010D3CC,(int)lbl_80494654,56,(int)fn_8010D130,(int)fn_8010D3F4,0,(int)lbl_80494648);
}
void *fn_8010D3CC(){return fn_8010D0F4();}
void *fn_8010D3EC(){return lbl_80563770;}
}
#pragma pop
