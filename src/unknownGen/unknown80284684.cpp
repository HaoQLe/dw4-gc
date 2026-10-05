#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80284294();
void *fn_80284560();
void fn_802845AC();
void *fn_80284748();
void fn_80284758();
void fn_80285B24();
extern char lbl_80416990[];
extern char lbl_804CB040[];
extern char lbl_80515C70[];
void fn_802846AC();
void *fn_80284728();
}
extern "C" {
void fn_80284684(){
 fn_80066188((int)fn_802846AC);
}
void fn_802846AC(){
 fn_80284294();
 fn_80066204(0,(int)lbl_80515C70,(int)fn_80285B24,(int)fn_80284748,(int)fn_80284728,(int)lbl_80416990,16,(int)fn_802845AC,(int)fn_80284758,0,(int)lbl_804CB040);
}
void *fn_80284728(){return fn_80284560();}
}
#pragma pop
