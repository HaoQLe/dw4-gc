#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_802E3908();
void fn_803250AC();
void *fn_803359EC();
void fn_80335A38();
void fn_80335C54();
extern char lbl_80453FE8[];
extern char lbl_804E22F8[];
extern char lbl_80536054[];
void fn_80335BB8();
void *fn_80335C34();
}
extern "C" {
void fn_80335B90(){
 fn_80066188((int)fn_80335BB8);
}
void fn_80335BB8(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536054,(int)fn_802E3908,(int)fn_802B381C,(int)fn_80335C34,(int)lbl_80453FE8,44,(int)fn_80335A38,(int)fn_80335C54,0,(int)lbl_804E22F8);
}
void *fn_80335C34(){return fn_803359EC();}
}
#pragma pop
