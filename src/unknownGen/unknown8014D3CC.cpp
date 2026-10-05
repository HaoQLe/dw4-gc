#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void *fn_8014D260();
void fn_8014D29C();
void fn_8014D484();
extern char lbl_8049F7F8[];
extern void *lbl_805643D8;
void fn_8014D3F4();
void *fn_8014D464();
}
extern "C" {
void fn_8014D3CC(){
 fn_80066188((int)fn_8014D3F4);
}
void fn_8014D3F4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805643D8,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8014D464,(int)lbl_8049F7F8,48,(int)fn_8014D29C,(int)fn_8014D484,0,0);
}
void *fn_8014D464(){return fn_8014D260();}
}
#pragma pop
