#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_8033E22C();
void fn_8033E278();
void fn_8033E3E4();
extern char lbl_80454BA8[];
extern char lbl_805364B8[];
void fn_8033E350();
void *fn_8033E3C4();
}
extern "C" {
void fn_8033E328(){
 fn_80066188((int)fn_8033E350);
}
void fn_8033E350(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805364B8,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_8033E3C4,(int)lbl_80454BA8,52,(int)fn_8033E278,(int)fn_8033E3E4,0,0);
}
void *fn_8033E3C4(){return fn_8033E22C();}
}
#pragma pop
