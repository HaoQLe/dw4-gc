#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B3FE4();
void fn_801B4020();
void fn_801B4280();
extern char lbl_804AD34C[];
extern char lbl_804AD360[];
extern void *lbl_80564A14;
void fn_801B41E8();
void *fn_801B4260();
}
extern "C" {
void fn_801B41C0(){
 fn_80066188((int)fn_801B41E8);
}
void fn_801B41E8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A14,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_801B4260,(int)lbl_804AD360,64,(int)fn_801B4020,(int)fn_801B4280,0,(int)lbl_804AD34C);
}
void *fn_801B4260(){return fn_801B3FE4();}
}
#pragma pop
