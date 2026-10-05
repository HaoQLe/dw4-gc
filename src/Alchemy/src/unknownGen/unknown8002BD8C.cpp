#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800284EC();
void *fn_8002BC58();
void fn_8002BC94();
void fn_8002BE48();
void fn_8002EABC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80464CEC[];
extern char lbl_8055D2DC[8];
extern void *lbl_8056189C;
void fn_8002BDB4();
void *fn_8002BE28();
}
extern "C" {
void fn_8002BD8C(){
 fn_80066188((int)fn_8002BDB4);
}
void fn_8002BDB4(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_8056189C,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_8002BE28,(int)lbl_80464CEC,24,(int)fn_8002BC94,(int)fn_8002BE48,0,(int)lbl_8055D2DC);
}
void *fn_8002BE28(){return fn_8002BC58();}
}
#pragma pop
