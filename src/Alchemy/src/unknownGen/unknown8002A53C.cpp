#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800284EC();
void *fn_8002A458();
void fn_8002A494();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_804645A4[];
extern void *lbl_805617B4;
void fn_8002A564();
void *fn_8002A5CC();
}
extern "C" {
void fn_8002A53C(){
 fn_80066188((int)fn_8002A564);
}
void fn_8002A564(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805617B4,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_8002A5CC,(int)lbl_804645A4,20,(int)fn_8002A494,0,0,0);
}
void *fn_8002A5CC(){return fn_8002A458();}
}
#pragma pop
