#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_801366A8();
void fn_801366E4();
void fn_801369C8();
void fn_8013A878();
extern char lbl_8049CA28[];
extern char lbl_8055F664[8];
extern void *lbl_80563CD0;
void fn_80136934();
void *fn_801369A8();
}
extern "C" {
void fn_8013690C(){
 fn_80066188((int)fn_80136934);
}
void fn_80136934(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563CD0,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_801369A8,(int)lbl_8049CA28,64,(int)fn_801366E4,(int)fn_801369C8,0,(int)lbl_8055F664);
}
void *fn_801369A8(){return fn_801366A8();}
}
#pragma pop
