#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_80402E28();
void *fn_8040627C();
void fn_804062C8();
void fn_804065E0();
extern char lbl_8046268C[];
extern char lbl_804F0914[];
extern char lbl_8055C974[];
void fn_80406544();
void *fn_804065C0();
}
extern "C" {
void fn_8040651C(){
 fn_80066188((int)fn_80406544);
}
void fn_80406544(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055C974,(int)fn_80066B08,(int)fn_800237D0,(int)fn_804065C0,(int)lbl_8046268C,40,(int)fn_804062C8,(int)fn_804065E0,0,(int)lbl_804F0914);
}
void *fn_804065C0(){return fn_8040627C();}
}
#pragma pop
