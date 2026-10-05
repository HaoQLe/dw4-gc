#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_8003A644();
void *fn_8003A7BC();
void fn_8003A7F8();
void fn_8003A990();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80468468[];
extern void *lbl_80562014;
extern void *lbl_80562020;
void fn_8003A8F8();
void *fn_8003A968();
void *fn_8003A988();
}
extern "C" {
void fn_8003A8D0(){
 fn_80066188((int)fn_8003A8F8);
}
void fn_8003A8F8(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80562020,(int)fn_8003A644,(int)fn_8003A988,(int)fn_8003A968,(int)lbl_80468468,100,(int)fn_8003A7F8,(int)fn_8003A990,0,0);
}
void *fn_8003A968(){return fn_8003A7BC();}
void *fn_8003A988(){return lbl_80562014;}
}
#pragma pop
