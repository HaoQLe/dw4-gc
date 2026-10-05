#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B866C();
void *fn_802B8770();
void fn_802B8780();
void fn_802E40FC();
extern char lbl_8041D630[];
extern char lbl_80534734[];
void fn_802B86E0();
void *fn_802B8750();
}
extern "C" {
void fn_802B86B8(){
 fn_80066188((int)fn_802B86E0);
}
void fn_802B86E0(){
 fn_802B1AC8();
 fn_80066204(1,(int)lbl_80534734,(int)fn_802E40FC,(int)fn_802B8770,(int)fn_802B8750,(int)lbl_8041D630,24,0,(int)fn_802B8780,0,0);
}
void *fn_802B8750(){return fn_802B866C();}
}
#pragma pop
