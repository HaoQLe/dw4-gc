#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_8014E3F8();
void fn_8014E434();
void fn_8014E6AC();
extern char lbl_8049FAC8[];
extern char lbl_8049FAD4[];
extern void *lbl_80564440;
void fn_8014E614();
void *fn_8014E68C();
}
extern "C" {
void fn_8014E5EC(){
 fn_80066188((int)fn_8014E614);
}
void fn_8014E614(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564440,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8014E68C,(int)lbl_8049FAD4,84,(int)fn_8014E434,(int)fn_8014E6AC,0,(int)lbl_8049FAC8);
}
void *fn_8014E68C(){return fn_8014E3F8();}
}
#pragma pop
