#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_80133518();
void fn_80133554();
void fn_8013378C();
void fn_8013A878();
extern char lbl_8049C468[];
extern void *lbl_80563BD8;
void fn_801336FC();
void *fn_8013376C();
}
extern "C" {
void fn_801336D4(){
 fn_80066188((int)fn_801336FC);
}
void fn_801336FC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563BD8,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8013376C,(int)lbl_8049C468,52,(int)fn_80133554,(int)fn_8013378C,0,0);
}
void *fn_8013376C(){return fn_80133518();}
}
#pragma pop
