#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80134A48();
void fn_80134A84();
void fn_80134C8C();
void fn_801351C0();
extern char lbl_8049C7E8[];
extern char lbl_8049C7F4[];
extern void *lbl_80563C54;
extern void *lbl_80563C74;
void fn_80134BEC();
void *fn_80134C64();
void *fn_80134C84();
}
extern "C" {
void fn_80134BC4(){
 fn_80066188((int)fn_80134BEC);
}
void fn_80134BEC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C54,(int)fn_801351C0,(int)fn_80134C84,(int)fn_80134C64,(int)lbl_8049C7F4,44,(int)fn_80134A84,(int)fn_80134C8C,0,(int)lbl_8049C7E8);
}
void *fn_80134C64(){return fn_80134A48();}
void *fn_80134C84(){return lbl_80563C74;}
}
#pragma pop
