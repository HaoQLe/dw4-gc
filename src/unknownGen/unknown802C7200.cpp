#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C70D0();
void fn_802C711C();
void *fn_802C72BC();
void fn_802C72CC();
void fn_802C7C58();
extern char lbl_8041ED68[];
extern char lbl_80534D30[];
void fn_802C7228();
void *fn_802C729C();
}
extern "C" {
void fn_802C7200(){
 fn_80066188((int)fn_802C7228);
}
void fn_802C7228(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534D30,(int)fn_802C7C58,(int)fn_802C72BC,(int)fn_802C729C,(int)lbl_8041ED68,120,(int)fn_802C711C,(int)fn_802C72CC,0,0);
}
void *fn_802C729C(){return fn_802C70D0();}
}
#pragma pop
