#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void *fn_8014DA10();
void fn_8014DA4C();
void fn_8014DCAC();
extern char lbl_8049F938[];
extern char lbl_8049F948[];
extern void *lbl_80564404;
void fn_8014DC14();
void *fn_8014DC8C();
}
extern "C" {
void fn_8014DBEC(){
 fn_80066188((int)fn_8014DC14);
}
void fn_8014DC14(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564404,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8014DC8C,(int)lbl_8049F948,60,(int)fn_8014DA4C,(int)fn_8014DCAC,0,(int)lbl_8049F938);
}
void *fn_8014DC8C(){return fn_8014DA10();}
}
#pragma pop
