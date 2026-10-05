#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_80152100();
void fn_8015213C();
void fn_80152334();
extern char lbl_804A0124[];
extern void *lbl_80564540;
void fn_801522A4();
void *fn_80152314();
}
extern "C" {
void fn_8015227C(){
 fn_80066188((int)fn_801522A4);
}
void fn_801522A4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564540,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80152314,(int)lbl_804A0124,48,(int)fn_8015213C,(int)fn_80152334,0,0);
}
void *fn_80152314(){return fn_80152100();}
}
#pragma pop
