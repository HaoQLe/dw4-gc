#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_801469D4();
void fn_80146A10();
void fn_80146D3C();
extern char lbl_8049E954[];
extern void *lbl_805641A8;
void fn_80146CAC();
void *fn_80146D1C();
}
extern "C" {
void fn_80146C84(){
 fn_80066188((int)fn_80146CAC);
}
void fn_80146CAC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805641A8,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80146D1C,(int)lbl_8049E954,104,(int)fn_80146A10,(int)fn_80146D3C,0,0);
}
void *fn_80146D1C(){return fn_801469D4();}
}
#pragma pop
