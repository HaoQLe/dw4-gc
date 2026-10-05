#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_80151860();
void fn_8015189C();
void fn_80151AD4();
extern char lbl_804A00C4[];
extern void *lbl_8056451C;
void fn_80151A44();
void *fn_80151AB4();
}
extern "C" {
void fn_80151A1C(){
 fn_80066188((int)fn_80151A44);
}
void fn_80151A44(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056451C,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80151AB4,(int)lbl_804A00C4,48,(int)fn_8015189C,(int)fn_80151AD4,0,0);
}
void *fn_80151AB4(){return fn_80151860();}
}
#pragma pop
