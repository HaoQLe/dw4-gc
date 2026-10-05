#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
void *fn_802E345C();
void fn_802E34A8();
void fn_802E3614();
void fn_802E40FC();
extern char lbl_80420D3C[];
extern char lbl_805356D4[];
void fn_802E3580();
void *fn_802E35F4();
}
extern "C" {
void fn_802E3558(){
 fn_80066188((int)fn_802E3580);
}
void fn_802E3580(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805356D4,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_802E35F4,(int)lbl_80420D3C,64,(int)fn_802E34A8,(int)fn_802E3614,0,0);
}
void *fn_802E35F4(){return fn_802E345C();}
}
#pragma pop
