#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8014AB30();
void fn_8014AB6C();
void fn_8014ADB4();
extern char lbl_8049F070[];
extern char lbl_8049F084[];
extern void *lbl_805642E4;
void fn_8014AD1C();
void *fn_8014AD94();
}
extern "C" {
void fn_8014ACF4(){
 fn_80066188((int)fn_8014AD1C);
}
void fn_8014AD1C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642E4,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_8014AD94,(int)lbl_8049F084,28,(int)fn_8014AB6C,(int)fn_8014ADB4,0,(int)lbl_8049F070);
}
void *fn_8014AD94(){return fn_8014AB30();}
}
#pragma pop
