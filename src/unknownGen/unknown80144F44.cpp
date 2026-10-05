#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013B680();
void *fn_80144DB8();
void fn_80144DF4();
void fn_80145004();
void fn_80146870();
extern char lbl_8049E638[];
extern char lbl_8049E64C[];
extern void *lbl_80564134;
void fn_80144F6C();
void *fn_80144FE4();
}
extern "C" {
void fn_80144F44(){
 fn_80066188((int)fn_80144F6C);
}
void fn_80144F6C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564134,(int)fn_80146870,(int)fn_8013B680,(int)fn_80144FE4,(int)lbl_8049E64C,52,(int)fn_80144DF4,(int)fn_80145004,0,(int)lbl_8049E638);
}
void *fn_80144FE4(){return fn_80144DB8();}
}
#pragma pop
