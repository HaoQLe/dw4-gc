#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_801339A4();
void fn_801339E0();
void fn_80133D3C();
void fn_8013A878();
extern char lbl_8049C550[];
extern void *lbl_80563BF4;
extern void *lbl_80563BF8;
void fn_80133B48();
void *fn_80133BB0();
}
extern "C" {
void fn_80133B20(){
 fn_80066188((int)fn_80133B48);
}
void fn_80133B48(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563BF4,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80133BB0,(int)lbl_8049C550,44,(int)fn_801339E0,0,0,0);
}
void *fn_80133BB0(){return fn_801339A4();}
void *fn_80133BD0(){
 if(!lbl_80563BF8 || !(reinterpret_cast<unsigned int *>(lbl_80563BF8)[0x24/4]&4)) fn_80133D3C();
 return lbl_80563BF8;
}
}
#pragma pop
