#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010F4FC();
void fn_80112DF0();
void fn_80284294();
void *fn_802865D4();
void fn_80286620();
void fn_80286738();
extern char lbl_80416C10[];
extern char lbl_804CB27C[];
extern char lbl_80515D1C[];
void fn_8028669C();
void *fn_80286718();
}
extern "C" {
void fn_80286674(){
 fn_80066188((int)fn_8028669C);
}
void fn_8028669C(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515D1C,(int)fn_80112DF0,(int)fn_8010F4FC,(int)fn_80286718,(int)lbl_80416C10,12,(int)fn_80286620,(int)fn_80286738,0,(int)lbl_804CB27C);
}
void *fn_80286718(){return fn_802865D4();}
}
#pragma pop
