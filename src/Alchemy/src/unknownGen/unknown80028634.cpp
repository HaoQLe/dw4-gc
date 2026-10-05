#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80028530();
void fn_8002856C();
void fn_800286F4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_804640A4[];
extern char lbl_804640B0[];
extern void *lbl_805616DC;
void fn_8002865C();
void *fn_800286D4();
}
extern "C" {
void fn_80028634(){
 fn_80066188((int)fn_8002865C);
}
void fn_8002865C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805616DC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800286D4,(int)lbl_804640B0,16,(int)fn_8002856C,(int)fn_800286F4,0,(int)lbl_804640A4);
}
void *fn_800286D4(){return fn_80028530();}
}
#pragma pop
