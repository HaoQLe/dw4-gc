#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80216620();
void fn_80216984();
void *fn_802184D4();
void fn_80218510();
void fn_80218678();
extern char lbl_804BA624[];
extern void *lbl_805659DC;
extern void *lbl_80565A78;
void fn_802185E0();
void *fn_80218650();
void *fn_80218670();
}
extern "C" {
void fn_802185B8(){
 fn_80066188((int)fn_802185E0);
}
void fn_802185E0(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A78,(int)fn_80216984,(int)fn_80218670,(int)fn_80218650,(int)lbl_804BA624,36,(int)fn_80218510,(int)fn_80218678,0,0);
}
void *fn_80218650(){return fn_802184D4();}
void *fn_80218670(){return lbl_805659DC;}
}
#pragma pop
