#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80132490();
void *fn_801A1FE8();
void fn_801A2070();
extern void *lbl_80563B54;
}
extern "C" {
void *fn_80132324(){return fn_801A1FE8();}
void fn_80132344(){return fn_801A2070();}
void *fn_80132364(){
 if(!lbl_80563B54 || !(reinterpret_cast<unsigned int *>(lbl_80563B54)[0x24/4]&4)) fn_80132490();
 return lbl_80563B54;
}
}
#pragma pop
