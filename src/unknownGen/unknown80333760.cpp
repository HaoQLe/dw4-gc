#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
void *fn_80333430();
void fn_8033347C();
void fn_80333824();
void fn_80333D3C();
extern char lbl_80453C98[];
extern char lbl_804E1FD8[];
extern char lbl_80535F70[];
void fn_80333788();
void *fn_80333804();
}
extern "C" {
void fn_80333760(){
 fn_80066188((int)fn_80333788);
}
void fn_80333788(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535F70,(int)fn_80333D3C,(int)fn_8032BD54,(int)fn_80333804,(int)lbl_80453C98,116,(int)fn_8033347C,(int)fn_80333824,0,(int)lbl_804E1FD8);
}
void *fn_80333804(){return fn_80333430();}
}
#pragma pop
