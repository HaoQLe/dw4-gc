#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_8013025C();
void fn_80130298();
void fn_80130490();
void fn_8013A878();
extern char lbl_8049BCDC[];
extern void *lbl_80563AB0;
void fn_80130400();
void *fn_80130470();
}
extern "C" {
void fn_801303D8(){
 fn_80066188((int)fn_80130400);
}
void fn_80130400(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563AB0,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80130470,(int)lbl_8049BCDC,52,(int)fn_80130298,(int)fn_80130490,0,0);
}
void *fn_80130470(){return fn_8013025C();}
}
#pragma pop
