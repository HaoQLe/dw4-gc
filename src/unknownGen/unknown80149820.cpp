#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_800D1DA4();
void fn_800D1F6C();
void fn_8012FC48();
void *fn_80149688();
void *fn_801496C8();
void fn_80149704();
void fn_801499C8();
extern char lbl_8049EF08[];
extern char lbl_8049EF14[];
extern char lbl_8049EF20[];
extern void *lbl_80564294;
extern void *lbl_80564298;
void fn_80149848();
void *fn_801498B0();
void *fn_801498D0();
void fn_8014990C();
void fn_80149934();
void *fn_801499A8();
}
extern "C" {
void fn_80149820(){
 fn_80066188((int)fn_80149848);
}
void fn_80149848(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564294,(int)fn_80149934,(int)fn_80149688,(int)fn_801498B0,(int)lbl_8049EF08,20,(int)fn_80149704,0,0,0);
}
void *fn_801498B0(){return fn_801496C8();}
void *fn_801498D0(){
 if(!lbl_80564298 || !(reinterpret_cast<unsigned int *>(lbl_80564298)[0x24/4]&4)) fn_8014990C();
 return lbl_80564298;
}
void fn_8014990C(){
 fn_80066188((int)fn_80149934);
}
void fn_80149934(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564298,(int)fn_800D1F6C,(int)fn_800D1DA4,(int)fn_801499A8,(int)lbl_8049EF20,20,0,(int)fn_801499C8,0,(int)lbl_8049EF14);
}
void *fn_801499A8(){return fn_801498D0();}
}
#pragma pop
