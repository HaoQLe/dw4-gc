#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801AD7BC();
void fn_801B09E4();
void *fn_801C758C();
void fn_801C75C8();
void fn_801C7718();
extern char lbl_804B14C8[];
extern char lbl_80560834[8];
extern void *lbl_805652D8;
void fn_801C7684();
void *fn_801C76F8();
}
extern "C" {
void fn_801C765C(){
 fn_80066188((int)fn_801C7684);
}
void fn_801C7684(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805652D8,(int)fn_801B09E4,(int)fn_801AD7BC,(int)fn_801C76F8,(int)lbl_804B14C8,40,(int)fn_801C75C8,(int)fn_801C7718,0,(int)lbl_80560834);
}
void *fn_801C76F8(){return fn_801C758C();}
}
#pragma pop
