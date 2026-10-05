#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284294();
void *fn_80284C54();
void fn_80284CA0();
extern char lbl_804169EC[];
extern char lbl_804CB084[];
extern char lbl_80515C88[];
void fn_80284D3C();
void *fn_80284DB0();
}
extern "C" {
void fn_80284D14(){
 fn_80066188((int)fn_80284D3C);
}
void fn_80284D3C(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515C88,(int)fn_8002907C,(int)fn_80024180,(int)fn_80284DB0,(int)lbl_804169EC,20,(int)fn_80284CA0,0,0,(int)lbl_804CB084);
}
void *fn_80284DB0(){return fn_80284C54();}
}
#pragma pop
