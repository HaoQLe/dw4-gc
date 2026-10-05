#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801CAC6C();
void fn_801CACA8();
void fn_801CAF40();
extern char lbl_804B20DC[];
extern char lbl_804B20F4[];
extern void *lbl_80565468;
void fn_801CAEA8();
void *fn_801CAF20();
}
extern "C" {
void fn_801CAE80(){
 fn_80066188((int)fn_801CAEA8);
}
void fn_801CAEA8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565468,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_801CAF20,(int)lbl_804B20F4,40,(int)fn_801CACA8,(int)fn_801CAF40,0,(int)lbl_804B20DC);
}
void *fn_801CAF20(){return fn_801CAC6C();}
}
#pragma pop
