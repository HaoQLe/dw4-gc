#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8014EFE8();
void fn_8014F024();
void fn_8014F300();
void fn_8014F328();
extern char lbl_8049FCB8[];
extern void *lbl_8056448C;
extern void *lbl_80564490;
void fn_8014F148();
void *fn_8014F1B0();
void *fn_8014F1D0();
}
extern "C" {
void fn_8014F120(){
 fn_80066188((int)fn_8014F148);
}
void fn_8014F148(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056448C,(int)fn_8014F328,(int)fn_8014F1D0,(int)fn_8014F1B0,(int)lbl_8049FCB8,44,(int)fn_8014F024,0,0,0);
}
void *fn_8014F1B0(){return fn_8014EFE8();}
void *fn_8014F1D0(){return lbl_80564490;}
void *fn_8014F1D8(){
 if(!lbl_80564490 || !(reinterpret_cast<unsigned int *>(lbl_80564490)[0x24/4]&4)) fn_8014F300();
 return lbl_80564490;
}
}
#pragma pop
