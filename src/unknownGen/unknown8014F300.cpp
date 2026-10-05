#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8013496C();
void fn_80145C0C();
void *fn_8014F1D8();
void fn_8014F214();
void fn_8014F3BC();
extern char lbl_8049FCD0[];
extern char lbl_8055FC84[8];
extern void *lbl_80564490;
void fn_8014F328();
void *fn_8014F39C();
}
extern "C" {
void fn_8014F300(){
 fn_80066188((int)fn_8014F328);
}
void fn_8014F328(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564490,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_8014F39C,(int)lbl_8049FCD0,44,(int)fn_8014F214,(int)fn_8014F3BC,0,(int)lbl_8055FC84);
}
void *fn_8014F39C(){return fn_8014F1D8();}
}
#pragma pop
