#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_80132E10();
void fn_80132E4C();
void fn_801330FC();
void fn_8013A878();
extern char lbl_8049C33C[];
extern char lbl_8049C348[];
extern void *lbl_80563BB4;
void fn_80133064();
void *fn_801330DC();
}
extern "C" {
void fn_8013303C(){
 fn_80066188((int)fn_80133064);
}
void fn_80133064(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563BB4,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_801330DC,(int)lbl_8049C348,60,(int)fn_80132E4C,(int)fn_801330FC,0,(int)lbl_8049C33C);
}
void *fn_801330DC(){return fn_80132E10();}
}
#pragma pop
