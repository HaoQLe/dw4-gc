#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void *fn_801331C0();
void fn_801331FC();
void fn_8013345C();
void fn_8013B97C();
extern char lbl_8049C3DC[];
extern char lbl_8049C3E8[];
extern void *lbl_80563BC8;
void fn_801333C4();
void *fn_8013343C();
}
extern "C" {
void fn_8013339C(){
 fn_80066188((int)fn_801333C4);
}
void fn_801333C4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563BC8,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8013343C,(int)lbl_8049C3E8,52,(int)fn_801331FC,(int)fn_8013345C,0,(int)lbl_8049C3DC);
}
void *fn_8013343C(){return fn_801331C0();}
}
#pragma pop
