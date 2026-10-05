#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_801420C8();
void fn_80142104();
void fn_801423AC();
extern char lbl_8049E188[];
extern void *lbl_80564060;
void fn_8014231C();
void *fn_8014238C();
}
extern "C" {
void fn_801422F4(){
 fn_80066188((int)fn_8014231C);
}
void fn_8014231C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564060,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8014238C,(int)lbl_8049E188,68,(int)fn_80142104,(int)fn_801423AC,0,0);
}
void *fn_8014238C(){return fn_801420C8();}
}
#pragma pop
