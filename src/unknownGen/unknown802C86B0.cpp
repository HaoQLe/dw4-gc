#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802C861C();
void fn_802C8668();
void fn_802C876C();
extern char lbl_8041EF24[];
extern char lbl_80534DC4[];
void fn_802C86D8();
void *fn_802C874C();
}
extern "C" {
void fn_802C86B0(){
 fn_80066188((int)fn_802C86D8);
}
void fn_802C86D8(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534DC4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802C874C,(int)lbl_8041EF24,44,(int)fn_802C8668,(int)fn_802C876C,0,0);
}
void *fn_802C874C(){return fn_802C861C();}
}
#pragma pop
