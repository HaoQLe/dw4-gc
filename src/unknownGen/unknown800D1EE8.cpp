#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_800CE2F8();
void *fn_800D86F0();
extern char lbl_804898B4[];
extern void *lbl_80562F60;
extern void *lbl_80565A18;
void *fn_800D1F08();
void fn_800D1F44();
void fn_800D1F6C();
void *fn_800D1FD0();
}
extern "C" {
void *fn_800D1EE8(){return fn_800D86F0();}
void *fn_800D1F08(){
 if(!lbl_80562F60 || !(reinterpret_cast<unsigned int *>(lbl_80562F60)[0x24/4]&4)) fn_800D1F44();
 return lbl_80562F60;
}
void fn_800D1F44(){
 fn_80066188((int)fn_800D1F6C);
}
void fn_800D1F6C(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F60,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800D1FD0,(int)lbl_804898B4,8,0,0,0,0);
}
void *fn_800D1FD0(){return fn_800D1F08();}
void *fn_800D1FF0(){return lbl_80565A18;}
}
#pragma pop
