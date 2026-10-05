#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284294();
void fn_80284540();
void fn_80284B74();
void *fn_80286820();
void fn_8028686C();
void fn_8028697C();
extern char lbl_80416C3C[];
extern char lbl_80515D24[];
void fn_802868E8();
void *fn_8028695C();
}
extern "C" {
void fn_802868C0(){
 fn_80066188((int)fn_802868E8);
}
void fn_802868E8(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515D24,(int)fn_80284B74,(int)fn_80284540,(int)fn_8028695C,(int)lbl_80416C3C,24,(int)fn_8028686C,(int)fn_8028697C,0,0);
}
void *fn_8028695C(){return fn_80286820();}
}
#pragma pop
