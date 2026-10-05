#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void fn_800D1804();
void *fn_800D18A4();
void fn_800D8290();
void fn_800D842C();
extern char lbl_8048EC68[];
extern char lbl_8055EE00[8];
extern void *lbl_80562F34;
extern void *lbl_80563440;
void fn_800D83B0();
void *fn_800D8424();
}
extern "C" {
void fn_800D8388(){
 fn_80066188((int)fn_800D83B0);
}
void fn_800D83B0(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563440,(int)fn_800D1804,(int)fn_800D8424,(int)fn_800D18A4,(int)lbl_8048EC68,152,(int)fn_800D8290,(int)fn_800D842C,0,(int)lbl_8055EE00);
}
void *fn_800D8424(){return lbl_80562F34;}
}
#pragma pop
