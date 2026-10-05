#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void *fn_80147F40();
void fn_80147F7C();
void fn_80148328();
extern char lbl_8049ED7C[];
extern void *lbl_80564244;
extern void *lbl_80564248;
void fn_801480E4();
void *fn_8014814C();
}
extern "C" {
void fn_801480BC(){
 fn_80066188((int)fn_801480E4);
}
void fn_801480E4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564244,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8014814C,(int)lbl_8049ED7C,44,(int)fn_80147F7C,0,0,0);
}
void *fn_8014814C(){return fn_80147F40();}
void *fn_8014816C(){
 if(!lbl_80564248 || !(reinterpret_cast<unsigned int *>(lbl_80564248)[0x24/4]&4)) fn_80148328();
 return lbl_80564248;
}
}
#pragma pop
