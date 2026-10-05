#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_8002C0F8();
void fn_8002C134();
void fn_8002C324();
void *fn_8002C3D0();
void fn_800300A0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80464FDC[];
extern void *lbl_805618F0;
extern void *lbl_80561B3C;
void fn_8002C284();
void *fn_8002C2FC();
void *fn_8002C31C();
}
extern "C" {
void fn_8002C25C(){
 fn_80066188((int)fn_8002C284);
}
void fn_8002C284(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805618F0,(int)fn_800300A0,(int)fn_8002C31C,(int)fn_8002C2FC,(int)lbl_80464FDC,60,(int)fn_8002C134,(int)fn_8002C324,(int)fn_8002C3D0,0);
}
void *fn_8002C2FC(){return fn_8002C0F8();}
void *fn_8002C31C(){return lbl_80561B3C;}
}
#pragma pop
