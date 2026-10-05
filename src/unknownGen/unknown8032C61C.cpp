#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_8032BD54();
void *fn_8032C2EC();
void fn_8032C338();
void fn_8032C6E0();
void fn_80333D3C();
extern char lbl_804537E4[];
extern char lbl_804E1B54[];
extern char lbl_80535E08[];
void fn_8032C644();
void *fn_8032C6C0();
}
extern "C" {
void fn_8032C61C(){
 fn_80066188((int)fn_8032C644);
}
void fn_8032C644(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E08,(int)fn_80333D3C,(int)fn_8032BD54,(int)fn_8032C6C0,(int)lbl_804537E4,104,(int)fn_8032C338,(int)fn_8032C6E0,0,(int)lbl_804E1B54);
}
void *fn_8032C6C0(){return fn_8032C2EC();}
}
#pragma pop
