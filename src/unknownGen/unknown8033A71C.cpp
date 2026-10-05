#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802CCE38();
void fn_803250AC();
void fn_803386E8();
void *fn_8033A55C();
void fn_8033A5A8();
void fn_8033A7E0();
extern char lbl_804546A8[];
extern char lbl_804E2A10[];
extern char lbl_805361F8[];
void fn_8033A744();
void *fn_8033A7C0();
}
extern "C" {
void fn_8033A71C(){
 fn_80066188((int)fn_8033A744);
}
void fn_8033A744(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805361F8,(int)fn_802CCE38,(int)fn_803386E8,(int)fn_8033A7C0,(int)lbl_804546A8,52,(int)fn_8033A5A8,(int)fn_8033A7E0,0,(int)lbl_804E2A10);
}
void *fn_8033A7C0(){return fn_8033A55C();}
}
#pragma pop
