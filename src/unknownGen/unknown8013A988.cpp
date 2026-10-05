#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013AA7C();
void fn_8013B97C();
extern char lbl_8049D770[];
extern char lbl_8055F7B0[8];
extern void *lbl_80563E5C;
void *fn_8013A988();
void fn_8013A9C4();
void fn_8013A9EC();
void *fn_8013AA5C();
}
extern "C" {
void *fn_8013A988(){
 if(!lbl_80563E5C || !(reinterpret_cast<unsigned int *>(lbl_80563E5C)[0x24/4]&4)) fn_8013A9C4();
 return lbl_80563E5C;
}
void fn_8013A9C4(){
 fn_80066188((int)fn_8013A9EC);
}
void fn_8013A9EC(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563E5C,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8013AA5C,(int)lbl_8049D770,52,0,(int)fn_8013AA7C,0,(int)lbl_8055F7B0);
}
void *fn_8013AA5C(){return fn_8013A988();}
}
#pragma pop
