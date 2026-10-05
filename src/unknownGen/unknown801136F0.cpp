#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8010CBD4();
void *fn_801135B4();
void fn_801135F0();
void fn_801137B0();
extern char lbl_80495460[];
extern char lbl_80495470[];
extern void *lbl_805637D8;
void fn_80113718();
void *fn_80113790();
}
extern "C" {
void fn_801136F0(){
 fn_80066188((int)fn_80113718);
}
void fn_80113718(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637D8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80113790,(int)lbl_80495470,32,(int)fn_801135F0,(int)fn_801137B0,0,(int)lbl_80495460);
}
void *fn_80113790(){return fn_801135B4();}
}
#pragma pop
