#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801308D0();
void fn_8013B97C();
void fn_8028C93C();
void *fn_8028C970();
void fn_8028C9AC();
void fn_8028CC44();
extern char lbl_804CC708[];
extern char lbl_804CC714[];
extern void *lbl_805660BC;
void fn_8028CBAC();
void *fn_8028CC24();
}
extern "C" {
void fn_8028CB84(){
 fn_80066188((int)fn_8028CBAC);
}
void fn_8028CBAC(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_805660BC,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8028CC24,(int)lbl_804CC714,68,(int)fn_8028C9AC,(int)fn_8028CC44,0,(int)lbl_804CC708);
}
void *fn_8028CC24(){return fn_8028C970();}
}
#pragma pop
