#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B8770();
void fn_802E40FC();
void fn_803250AC();
void *fn_8034110C();
void fn_80341158();
void fn_8034135C();
extern char lbl_80455038[];
extern char lbl_804E3BA8[];
extern char lbl_805366BC[];
void fn_803412C0();
void *fn_8034133C();
}
extern "C" {
void fn_80341298(){
 fn_80066188((int)fn_803412C0);
}
void fn_803412C0(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805366BC,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_8034133C,(int)lbl_80455038,40,(int)fn_80341158,(int)fn_8034135C,0,(int)lbl_804E3BA8);
}
void *fn_8034133C(){return fn_8034110C();}
}
#pragma pop
