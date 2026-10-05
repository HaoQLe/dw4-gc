#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void fn_8013A9EC();
void *fn_8013AFE4();
void *fn_8014E0B8();
void fn_8014E0F4();
void fn_8014E324();
extern char lbl_8049FA28[];
extern void *lbl_80564428;
void fn_8014E294();
void *fn_8014E304();
}
extern "C" {
void fn_8014E26C(){
 fn_80066188((int)fn_8014E294);
}
void fn_8014E294(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564428,(int)fn_8013A9EC,(int)fn_8013AFE4,(int)fn_8014E304,(int)lbl_8049FA28,72,(int)fn_8014E0F4,(int)fn_8014E324,0,0);
}
void *fn_8014E304(){return fn_8014E0B8();}
}
#pragma pop
