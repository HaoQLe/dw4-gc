#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8033520C();
void fn_80335258();
extern char lbl_80453EE0[];
extern char lbl_804E2198[];
extern char lbl_80535FF8[];
void fn_803352F4();
void *fn_80335368();
}
extern "C" {
void fn_803352CC(){
 fn_80066188((int)fn_803352F4);
}
void fn_803352F4(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FF8,(int)fn_8002907C,(int)fn_80024180,(int)fn_80335368,(int)lbl_80453EE0,20,(int)fn_80335258,0,0,(int)lbl_804E2198);
}
void *fn_80335368(){return fn_8033520C();}
}
#pragma pop
