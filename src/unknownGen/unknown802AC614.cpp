#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void *fn_802AC554();
void fn_802AC5A0();
extern char lbl_8041BDAC[];
extern char lbl_804CDB9C[];
extern char lbl_80534408[];
void fn_802AC63C();
void *fn_802AC6B0();
}
extern "C" {
void fn_802AC614(){
 fn_80066188((int)fn_802AC63C);
}
void fn_802AC63C(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534408,(int)fn_8002907C,(int)fn_80024180,(int)fn_802AC6B0,(int)lbl_8041BDAC,20,(int)fn_802AC5A0,0,0,(int)lbl_804CDB9C);
}
void *fn_802AC6B0(){return fn_802AC554();}
}
#pragma pop
