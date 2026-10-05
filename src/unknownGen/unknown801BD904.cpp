#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801AAB64();
void *fn_801BD708();
void fn_801BD744();
void fn_801BD9D0();
void fn_801BDB1C();
extern char lbl_804AF1D0[];
extern char lbl_804AF1E8[];
extern void *lbl_80564668;
extern void *lbl_80564E3C;
void fn_801BD92C();
void *fn_801BD9A8();
void *fn_801BD9C8();
}
extern "C" {
void fn_801BD904(){
 fn_80066188((int)fn_801BD92C);
}
void fn_801BD92C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564E3C,(int)fn_801AAB64,(int)fn_801BD9C8,(int)fn_801BD9A8,(int)lbl_804AF1E8,64,(int)fn_801BD744,(int)fn_801BD9D0,(int)fn_801BDB1C,(int)lbl_804AF1D0);
}
void *fn_801BD9A8(){return fn_801BD708();}
void *fn_801BD9C8(){return lbl_80564668;}
}
#pragma pop
