#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013B97C();
void *fn_8014B7B0();
void fn_8014B7EC();
void fn_8014BDA8();
extern char lbl_8049F24C[];
extern void *lbl_8056432C;
extern void *lbl_80564330;
void fn_8014B904();
void *fn_8014B96C();
}
extern "C" {
void fn_8014B8DC(){
 fn_80066188((int)fn_8014B904);
}
void fn_8014B904(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056432C,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8014B96C,(int)lbl_8049F24C,40,(int)fn_8014B7EC,0,0,0);
}
void *fn_8014B96C(){return fn_8014B7B0();}
void *fn_8014B98C(){
 if(!lbl_80564330 || !(reinterpret_cast<unsigned int *>(lbl_80564330)[0x24/4]&4)) fn_8014BDA8();
 return lbl_80564330;
}
}
#pragma pop
