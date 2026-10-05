#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DF094();
void fn_802DF0E0();
void fn_802DF2E4();
extern char lbl_8042084C[];
extern char lbl_804D26CC[];
extern char lbl_80535514[];
void fn_802DF248();
void *fn_802DF2C4();
}
extern "C" {
void fn_802DF220(){
 fn_80066188((int)fn_802DF248);
}
void fn_802DF248(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535514,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_802DF2C4,(int)lbl_8042084C,36,(int)fn_802DF0E0,(int)fn_802DF2E4,0,(int)lbl_804D26CC);
}
void *fn_802DF2C4(){return fn_802DF094();}
}
#pragma pop
