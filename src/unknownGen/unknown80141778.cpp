#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013B680();
void *fn_8014169C();
void fn_801416D8();
void fn_80141834();
void fn_80146870();
extern char lbl_8049E110[];
extern char lbl_8055F928[8];
extern void *lbl_80564040;
void fn_801417A0();
void *fn_80141814();
}
extern "C" {
void fn_80141778(){
 fn_80066188((int)fn_801417A0);
}
void fn_801417A0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564040,(int)fn_80146870,(int)fn_8013B680,(int)fn_80141814,(int)lbl_8049E110,36,(int)fn_801416D8,(int)fn_80141834,0,(int)lbl_8055F928);
}
void *fn_80141814(){return fn_8014169C();}
}
#pragma pop
