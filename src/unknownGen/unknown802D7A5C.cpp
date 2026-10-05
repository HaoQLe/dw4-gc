#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802D799C();
void fn_802D79E8();
extern char lbl_80420108[];
extern char lbl_804D1E88[];
extern char lbl_805352C8[];
void fn_802D7A84();
void *fn_802D7AF8();
}
extern "C" {
void fn_802D7A5C(){
 fn_80066188((int)fn_802D7A84);
}
void fn_802D7A84(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805352C8,(int)fn_8002907C,(int)fn_80024180,(int)fn_802D7AF8,(int)lbl_80420108,20,(int)fn_802D79E8,0,0,(int)lbl_804D1E88);
}
void *fn_802D7AF8(){return fn_802D799C();}
}
#pragma pop
