#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284294();
void *fn_80284F20();
void fn_80284F6C();
extern char lbl_80416A18[];
extern char lbl_804CB08C[];
extern char lbl_80515C90[];
void fn_80285008();
void *fn_8028507C();
}
extern "C" {
void fn_80284FE0(){
 fn_80066188((int)fn_80285008);
}
void fn_80285008(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515C90,(int)fn_8002907C,(int)fn_80024180,(int)fn_8028507C,(int)lbl_80416A18,20,(int)fn_80284F6C,0,0,(int)lbl_804CB08C);
}
void *fn_8028507C(){return fn_80284F20();}
}
#pragma pop
