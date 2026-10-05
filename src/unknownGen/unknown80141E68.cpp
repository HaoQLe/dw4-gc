#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void *fn_80141CFC();
void fn_80141D38();
void fn_80141F20();
extern char lbl_8049E164[];
extern void *lbl_80564054;
void fn_80141E90();
void *fn_80141F00();
}
extern "C" {
void fn_80141E68(){
 fn_80066188((int)fn_80141E90);
}
void fn_80141E90(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564054,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80141F00,(int)lbl_8049E164,44,(int)fn_80141D38,(int)fn_80141F20,0,0);
}
void *fn_80141F00(){return fn_80141CFC();}
}
#pragma pop
