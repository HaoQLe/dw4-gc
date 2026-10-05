#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BC428();
void *fn_802BC9C0();
void fn_802BCA0C();
void fn_802BCCC4();
void fn_802BF680();
extern char lbl_8041DCEC[];
extern char lbl_804CF96C[];
extern char lbl_80534864[];
void fn_802BCC28();
void *fn_802BCCA4();
}
extern "C" {
void fn_802BCC00(){
 fn_80066188((int)fn_802BCC28);
}
void fn_802BCC28(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534864,(int)fn_802BF680,(int)fn_802BC428,(int)fn_802BCCA4,(int)lbl_8041DCEC,216,(int)fn_802BCA0C,(int)fn_802BCCC4,0,(int)lbl_804CF96C);
}
void *fn_802BCCA4(){return fn_802BC9C0();}
}
#pragma pop
