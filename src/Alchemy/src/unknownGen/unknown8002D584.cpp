#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_8002D410();
void fn_8002D44C();
void fn_8002D644();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_80465324[];
extern char lbl_80465334[];
extern void *lbl_805619A0;
void fn_8002D5AC();
void *fn_8002D624();
}
extern "C" {
void fn_8002D584(){
 fn_80066188((int)fn_8002D5AC);
}
void fn_8002D5AC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805619A0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8002D624,(int)lbl_80465334,32,(int)fn_8002D44C,(int)fn_8002D644,0,(int)lbl_80465324);
}
void *fn_8002D624(){return fn_8002D410();}
}
#pragma pop
