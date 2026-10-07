#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C41A0();
void fn_802C41EC();
void *fn_802C4454();
void fn_802C4464();
void *fn_802C44E4();
void fn_802C4708();
extern char lbl_8041E854[];
extern char lbl_80534B94[];
void fn_802C43B8();
void *fn_802C4434();
}
extern "C" {
void fn_802C4390(){
 fn_80066188((int)fn_802C43B8);
}
void fn_802C43B8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B94,(int)fn_802C4708,(int)fn_802C4454,(int)fn_802C4434,(int)lbl_8041E854,128,(int)fn_802C41EC,(int)fn_802C4464,(int)fn_802C44E4,0);
}
void *fn_802C4434(){return fn_802C41A0();}
}
#pragma pop
