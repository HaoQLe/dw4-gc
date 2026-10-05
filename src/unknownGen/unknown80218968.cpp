#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80216620();
void fn_80216984();
void *fn_80218670();
void *fn_80218884();
void fn_802188C0();
void fn_80218A20();
extern char lbl_804BA6D8[];
extern void *lbl_80565A98;
void fn_80218990();
void *fn_80218A00();
}
extern "C" {
void fn_80218968(){
 fn_80066188((int)fn_80218990);
}
void fn_80218990(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A98,(int)fn_80216984,(int)fn_80218670,(int)fn_80218A00,(int)lbl_804BA6D8,36,(int)fn_802188C0,(int)fn_80218A20,0,0);
}
void *fn_80218A00(){return fn_80218884();}
}
#pragma pop
