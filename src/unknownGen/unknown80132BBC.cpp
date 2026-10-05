#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_8013291C();
void fn_80132958();
void fn_80132C7C();
void fn_8013A878();
extern char lbl_8049C1EC[];
extern char lbl_8049C1FC[];
extern void *lbl_80563B7C;
void fn_80132BE4();
void *fn_80132C5C();
}
extern "C" {
void fn_80132BBC(){
 fn_80066188((int)fn_80132BE4);
}
void fn_80132BE4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563B7C,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80132C5C,(int)lbl_8049C1FC,96,(int)fn_80132958,(int)fn_80132C7C,0,(int)lbl_8049C1EC);
}
void *fn_80132C5C(){return fn_8013291C();}
}
#pragma pop
