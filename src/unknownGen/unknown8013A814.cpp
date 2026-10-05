#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_801308D0();
void fn_8013A908();
void fn_8013B97C();
extern char lbl_8049D6F4[];
extern char lbl_8055F798[8];
extern void *lbl_80563E54;
void *fn_8013A814();
void fn_8013A850();
void fn_8013A878();
void *fn_8013A8E8();
}
extern "C" {
void *fn_8013A814(){
 if(!lbl_80563E54 || !(reinterpret_cast<unsigned int *>(lbl_80563E54)[0x24/4]&4)) fn_8013A850();
 return lbl_80563E54;
}
void fn_8013A850(){
 fn_80066188((int)fn_8013A878);
}
void fn_8013A878(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563E54,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_8013A8E8,(int)lbl_8049D6F4,44,0,(int)fn_8013A908,0,(int)lbl_8055F798);
}
void *fn_8013A8E8(){return fn_8013A814();}
}
#pragma pop
