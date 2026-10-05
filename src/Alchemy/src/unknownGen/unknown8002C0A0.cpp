#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8002C25C();
void *fn_80039610();
void *fn_8006546C(void *,void *);
extern void *lbl_805618F0;
}
extern "C" {
void *fn_8002C0A0(){return fn_80039610();}
void *fn_8002C0C0(void *object){
 fn_8002C25C();
 return fn_8006546C(lbl_805618F0,object);
}
void *fn_8002C0F8(){
 if(!lbl_805618F0 || !(reinterpret_cast<unsigned int *>(lbl_805618F0)[0x24/4]&4)) fn_8002C25C();
 return lbl_805618F0;
}
}
#pragma pop
