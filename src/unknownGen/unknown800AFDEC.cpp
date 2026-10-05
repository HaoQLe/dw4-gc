#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800AFD50();
void fn_800AFD8C();
void fn_800AFEA4();
extern char lbl_804786C8[];
extern void *lbl_805625A4;
void fn_800AFE14();
void *fn_800AFE84();
}
extern "C" {
void fn_800AFDEC(){
 fn_80066188((int)fn_800AFE14);
}
void fn_800AFE14(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805625A4,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AFE84,(int)lbl_804786C8,80,(int)fn_800AFD8C,(int)fn_800AFEA4,0,0);
}
void *fn_800AFE84(){return fn_800AFD50();}
}
#pragma pop
