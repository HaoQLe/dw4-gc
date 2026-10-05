#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80328C10();
void *fn_8032978C();
void fn_803297D8();
void fn_803299D0();
void fn_8032A928();
extern char lbl_804535A0[];
extern char lbl_804E19C8[];
extern char lbl_80535D7C[];
void fn_80329934();
void *fn_803299B0();
}
extern "C" {
void fn_8032990C(){
 fn_80066188((int)fn_80329934);
}
void fn_80329934(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D7C,(int)fn_8032A928,(int)fn_80328C10,(int)fn_803299B0,(int)lbl_804535A0,116,(int)fn_803297D8,(int)fn_803299D0,0,(int)lbl_804E19C8);
}
void *fn_803299B0(){return fn_8032978C();}
}
#pragma pop
