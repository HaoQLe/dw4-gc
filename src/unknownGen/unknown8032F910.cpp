#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_8032BD54();
void *fn_8032F614();
void fn_8032F660();
void fn_8032F9D4();
void fn_80333D3C();
extern char lbl_804539FC[];
extern char lbl_804E1D54[];
extern char lbl_80535EA8[];
void fn_8032F938();
void *fn_8032F9B4();
}
extern "C" {
void fn_8032F910(){
 fn_80066188((int)fn_8032F938);
}
void fn_8032F938(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535EA8,(int)fn_80333D3C,(int)fn_8032BD54,(int)fn_8032F9B4,(int)lbl_804539FC,100,(int)fn_8032F660,(int)fn_8032F9D4,0,(int)lbl_804E1D54);
}
void *fn_8032F9B4(){return fn_8032F614();}
}
#pragma pop
