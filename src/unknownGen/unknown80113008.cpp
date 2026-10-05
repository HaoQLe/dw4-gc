#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CB164();
void *fn_800CB840();
void fn_8010CBD4();
void *fn_80112EB4();
void fn_80112EF0();
void fn_801130C8();
extern char lbl_80495390[];
extern char lbl_8049539C[];
extern void *lbl_805637BC;
void fn_80113030();
void *fn_801130A8();
}
extern "C" {
void fn_80113008(){
 fn_80066188((int)fn_80113030);
}
void fn_80113030(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637BC,(int)fn_800CB164,(int)fn_800CB840,(int)fn_801130A8,(int)lbl_8049539C,20,(int)fn_80112EF0,(int)fn_801130C8,0,(int)lbl_80495390);
}
void *fn_801130A8(){return fn_80112EB4();}
}
#pragma pop
