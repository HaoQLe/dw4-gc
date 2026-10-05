#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_801C0D64();
void *fn_801E9C84();
extern void *lbl_80564EFC;
}
extern "C" {
void *fn_801C0564(){return fn_801E9C84();}
void *fn_801C0584(void *object){
 fn_801C0D64();
 return fn_8006546C(lbl_80564EFC,object);
}
void *fn_801C05BC(){
 if(!lbl_80564EFC || !(reinterpret_cast<unsigned int *>(lbl_80564EFC)[0x24/4]&4)) fn_801C0D64();
 return lbl_80564EFC;
}
}
#pragma pop
