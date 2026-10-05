#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C884C();
void fn_802C8898();
extern char lbl_8041EF8C[];
extern char lbl_804D0CE8[];
extern char lbl_80534DEC[];
void fn_802C8934();
void *fn_802C89A8();
}
extern "C" {
void fn_802C890C(){
 fn_80066188((int)fn_802C8934);
}
void fn_802C8934(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534DEC,(int)fn_8002907C,(int)fn_80024180,(int)fn_802C89A8,(int)lbl_8041EF8C,20,(int)fn_802C8898,0,0,(int)lbl_804D0CE8);
}
void *fn_802C89A8(){return fn_802C884C();}
}
#pragma pop
