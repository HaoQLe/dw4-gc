#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8012FC48();
void *fn_80130EB4();
void fn_80130EF0();
void fn_80131120();
extern char lbl_8049BDDC[];
extern char lbl_8049BDF4[];
extern void *lbl_80563AE8;
void fn_80131088();
void *fn_80131100();
}
extern "C" {
void fn_80131060(){
 fn_80066188((int)fn_80131088);
}
void fn_80131088(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563AE8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80131100,(int)lbl_8049BDF4,28,(int)fn_80130EF0,(int)fn_80131120,0,(int)lbl_8049BDDC);
}
void *fn_80131100(){return fn_80130EB4();}
}
#pragma pop
