#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_8033C7AC();
void fn_8033C7F8();
void fn_8033C96C();
extern char lbl_8045490C[];
extern char lbl_804E2D70[];
extern char lbl_805362F8[];
void fn_8033C8D0();
void *fn_8033C94C();
}
extern "C" {
void fn_8033C8A8(){
 fn_80066188((int)fn_8033C8D0);
}
void fn_8033C8D0(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805362F8,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_8033C94C,(int)lbl_8045490C,76,(int)fn_8033C7F8,(int)fn_8033C96C,0,(int)lbl_804E2D70);
}
void *fn_8033C94C(){return fn_8033C7AC();}
}
#pragma pop
